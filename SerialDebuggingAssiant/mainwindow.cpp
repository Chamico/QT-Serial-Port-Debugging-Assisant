#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //连接信号槽
    ConnectSignal();
    //初始化界面
    WidgetInitial();

}

MainWindow::~MainWindow()
{
    delete ui;
}

//连接信号槽
void MainWindow::ConnectSignal(){

    //串口设置
    connect(ui->rb_serial_port_on, SIGNAL(toggled(bool)), this, SLOT(SerialPortOn()));
    connect(ui->rb_serial_port_off, SIGNAL(toggled(bool)), this, SLOT(SerialPortOff()));
    connect(ui->cb_serial_port_baud, SIGNAL(currentIndexChanged(int)), this, SLOT(SerialPortSetBaud()));
    connect(ui->cb_serial_port_data_bit, SIGNAL(currentIndexChanged(int)), this, SLOT(SerialPortSetDataBit()));
    connect(ui->cb_serial_port_flow_contronl, SIGNAL(currentIndexChanged(int)), this, SLOT(SerialPortSetFlowContronl()));
    connect(ui->cb_serial_port_parity, SIGNAL(currentIndexChanged(int)), this, SLOT(SerialPortSetParity()));
    connect(ui->cb_serial_port_stop_bit, SIGNAL(currentIndexChanged(int)), this, SLOT(SerialPortSetStopBit()));

    //定时器
    connect(timer_error_type, SIGNAL(timeout()), this, SLOT(UpdateErrorType()));
    connect(timer_serial_port_number, SIGNAL(timeout()), this, SLOT(UpdateSerialPortNumber()));
    connect(timer_send_automatic, SIGNAL(timeout()), this, SLOT(UpdateSendAutomaic()));
    connect(timer_receive_data, SIGNAL(timeout()), this, SLOT(UpdateReceive()));

    //接收区
    connect(ui->pb_receive_clear, SIGNAL(clicked(bool)), this, SLOT(ReceiveClear()));
    connect(ui->pb_receive_pause, SIGNAL(clicked(bool)), this, SLOT(ReceivePause()));
    connect(ui->chb_receive_text_display, SIGNAL(stateChanged(int)), this, SLOT(ReceiveTextDisplay()));
    connect(ui->chb_receive_hex_display, SIGNAL(stateChanged(int)), this, SLOT(ReceiveHexDisplay()));

    //发送区
    connect(ui->pb_send_clear, SIGNAL(clicked(bool)), this, SLOT(SendClear()));
    connect(ui->chb_send_automatic, SIGNAL(stateChanged(int)), this, SLOT(SendAutomatic()));
    connect(ui->sp_send_time, SIGNAL(valueChanged(int)), this, SLOT(SendAutomaticTime()));
    connect(ui->pb_send, SIGNAL(clicked(bool)), this, SLOT(SendData()));

    //帮助按钮
     connect(ui->pb_help, SIGNAL(clicked(bool)), this, SLOT(Help()));

}

//界面初始化设置
void MainWindow::WidgetInitial(){

    ui->chb_receive_text_display->setChecked(true);

    timer_error_type->start(50);    // 50 ms 刷新一次错误信息，设置显示

    timer_serial_port_number->start(10);    // 50 ms 刷新一次串口信息

    timer_receive_data->start(50);  // 50 ms 接收一次数据


    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()){

        if(serial_port_name.compare(info.portName())){
            ui->cb_serial_port_number->clear();
            ui->cb_serial_port_number->addItem(info.portName() + " Serial");
            my_serial_port_->setPortName(info.portName());
        }else{

            serial_port_name = info.portName();
        }
    }

    // 以 读写模式 打开串口
    bool is_open = my_serial_port_->open(QIODevice::ReadWrite);

    if(is_open){
        ui->rb_serial_port_on->setChecked(true);
        SerialPortSetBaud();
        SerialPortSetDataBit();
        SerialPortSetFlowContronl();
        SerialPortSetParity();
        SerialPortSetStopBit();
    }else{
        ui->rb_serial_port_off->setChecked(true);
    }
}


//打开串口
void MainWindow::SerialPortOn(){

    // 设置 radio button 关
    if(ui->rb_serial_port_on->isChecked()){
        ui->rb_serial_port_off->setChecked(false);
    }else{
        ui->rb_serial_port_off->setChecked(true);
    }

    // 以 读写模式 打开串口
    bool is_open = my_serial_port_->open(QIODevice::ReadWrite);

    if(is_open){
        // 当串口成功打开后 配置基本传输设置
        SerialPortSetBaud();
        SerialPortSetDataBit();
        SerialPortSetFlowContronl();
        SerialPortSetParity();
        SerialPortSetStopBit();
    }

}

//关闭串口
void MainWindow::SerialPortOff(){

    // 设置 radio button 关
    if(ui->rb_serial_port_off->isChecked()){
        ui->rb_serial_port_on->setChecked(false);
    }else{
        ui->rb_serial_port_on->setChecked(true);
    }

    my_serial_port_->close();   // 关闭串口
}

//设置波特率
void MainWindow::SerialPortSetBaud(){

    int index = ui->cb_serial_port_baud->currentIndex();

    switch (index) {
    case 0:
        my_serial_port_->setBaudRate(QSerialPort::Baud1200);
        break;
    case 1:
        my_serial_port_->setBaudRate(QSerialPort::Baud2400);
        break;
    case 2:
        my_serial_port_->setBaudRate(QSerialPort::Baud4800);
        break;
    case 3:
        my_serial_port_->setBaudRate(QSerialPort::Baud9600);
        break;
    case 4:
        my_serial_port_->setBaudRate(QSerialPort::Baud19200);
        break;
    case 5:
        my_serial_port_->setBaudRate(QSerialPort::Baud38400);
        break;
    case 6:
        my_serial_port_->setBaudRate(QSerialPort::Baud57600);
        break;
    case 7:
        my_serial_port_->setBaudRate(QSerialPort::Baud115200);
        break;
    case 8:
        my_serial_port_->setBaudRate(QSerialPort::UnknownBaud);
        break;
    }

}

//设置数据位
void MainWindow::SerialPortSetDataBit(){

    int index = ui->cb_serial_port_data_bit->currentIndex();

    switch (index) {

    case 0:
        my_serial_port_->setDataBits(QSerialPort::Data8);
        break;
    case 1:
        my_serial_port_->setDataBits(QSerialPort::Data7);
        break;
    case 2:
        my_serial_port_->setDataBits(QSerialPort::Data6);
        break;
    case 3:
        my_serial_port_->setDataBits(QSerialPort::Data5);
        break;
    case 4:
        my_serial_port_->setDataBits(QSerialPort::UnknownDataBits);
        break;
    }

}

//设置流控制
void MainWindow::SerialPortSetFlowContronl(){
    int index = ui->cb_serial_port_flow_contronl->currentIndex();

    switch (index) {
    case 0:
        my_serial_port_->setFlowControl(QSerialPort::NoFlowControl);
        break;
    case 1:
        my_serial_port_->setFlowControl(QSerialPort::HardwareControl);
        break;
    case 2:
        my_serial_port_->setFlowControl(QSerialPort::SoftwareControl);
        break;
    case 3:
        my_serial_port_->setFlowControl(QSerialPort::UnknownFlowControl);
        break;
    }
}

//设置奇偶校验位
void MainWindow::SerialPortSetParity(){

    int index = ui->cb_serial_port_parity->currentIndex();

    switch (index) {
    case 0:
        my_serial_port_->setParity(QSerialPort::NoParity);
        break;
    case 1:
        my_serial_port_->setParity(QSerialPort::EvenParity);
        break;
    case 2:
        my_serial_port_->setParity(QSerialPort::OddParity);
        break;
    case 3:
        my_serial_port_->setParity(QSerialPort::SpaceParity);
        break;
    case 4:
        my_serial_port_->setParity(QSerialPort::MarkParity);
        break;
    case 5:
        my_serial_port_->setParity(QSerialPort::UnknownParity);
        break;
    }
}

//设置停止位
void MainWindow::SerialPortSetStopBit(){
    int index = ui->cb_serial_port_stop_bit->currentIndex();

    switch (index) {
    case 0:
        my_serial_port_->setStopBits(QSerialPort::OneStop);
        break;
    case 1:
        my_serial_port_->setStopBits(QSerialPort::OneAndHalfStop);
        break;
    case 2:
        my_serial_port_->setStopBits(QSerialPort::TwoStop);
        break;
    case 3:
        my_serial_port_->setStopBits(QSerialPort::UnknownStopBits);
        break;
    }
}

//更新错误信息
void MainWindow::UpdateErrorType(){
    // 获取系统错误信息并显示
    QString error = my_serial_port_->errorString();
    ui->label_erro_type->setText(error);
}

//更新串口号
void MainWindow::UpdateSerialPortNumber(){

    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()){

        if(serial_port_name.compare(info.portName())){
            ui->cb_serial_port_number->clear();
            ui->cb_serial_port_number->addItem(info.portName() + " Serial");
            my_serial_port_->setPortName(info.portName());
            return;
        }else{

            serial_port_name = info.portName();
            return;
        }
    }

    ui->cb_serial_port_number->clear();
    ui->cb_serial_port_number->addItem("暂无可用串口");



}

//更新自动发送数据
void MainWindow::UpdateSendAutomaic(){

    SendData();    //发送数据

}

//更新接收数据
void MainWindow::UpdateReceive(){

    QByteArray data = my_serial_port_->readAll();
    QString str(data);


    QString content = ui->pb_receive_pause->text();

    if(content.operator==("暂停接收")){

        if(data.isNull()){

        }else{
            if(ui->chb_receive_hex_display->isChecked()){

                QByteArray temp;
                data = data.toHex();

                for(int i = 0; i < data.length() / 2; ++i){ //添加空格
                    temp += data.mid(i * 2, 2) + "  ";
                }

                ui->pte_receive->appendPlainText(temp);

            }else{
                ui->pte_receive->appendPlainText(str);  //普通文本显示
            }
        }

    }else if(content.operator==("恢复接收")){
        // 什么也不做
    }
}

//清空接收区
void MainWindow::ReceiveClear(){
    ui->pte_receive->clear();
}

//暂停接收
void MainWindow::ReceivePause(){

    QString content = ui->pb_receive_pause->text();

    if(content.operator==("暂停接收")){

        ui->pb_receive_pause->setText("恢复接收");

    }else if(content.operator==("恢复接收")){

        ui->pb_receive_pause->setText("暂停接收");

    }

}

//接收区 普通文本 显示
void MainWindow::ReceiveTextDisplay(){

    //显示设置
    if(ui->chb_receive_text_display->isChecked()){
        ui->chb_receive_hex_display->setChecked(false);
    }else{
        ui->chb_receive_hex_display->setChecked(true);
    }

}

//接收区 16进制 显示
void MainWindow::ReceiveHexDisplay(){

    //显示设置
    if(ui->chb_receive_hex_display->isChecked()){
        ui->chb_receive_text_display->setChecked(false);
    }else{
        ui->chb_receive_text_display->setChecked(true);
    }

}

//清空发送区
void MainWindow::SendClear(){
    ui->pte_send->clear();

}

//自动发送数据
void MainWindow::SendAutomatic(){

    bool flag = ui->chb_send_automatic->isChecked();

    if(flag){   //自动发送
        int time = ui->sp_send_time->value();   //启动线程
        timer_send_automatic->start(time);


    }else{  //非自动发送
        timer_send_automatic->stop();   //停止线程
    }


}

//设置自动发送数据的时间间隔
void MainWindow::SendAutomaticTime(){

    int time = ui->sp_send_time->value();

    if(time <= 0){
        return;
    }

    bool flag = ui->chb_send_automatic->isChecked();

    if(flag){   //自动发送

        timer_send_automatic->stop();

        timer_send_automatic->start(time);


    }else{  //非自动发送
        timer_send_automatic->stop();   //停止线程
    }
}

//发送数据
void MainWindow::SendData(){

    QString str = ui->pte_send->toPlainText();

    bool is_hex = ui->chb_send_hex->isChecked();
    QByteArray data = str.toUtf8();

    if(is_hex){
        my_serial_port_->write(data.toHex());   //16进制发送
    }else{
        my_serial_port_->write(data);   //普通文本发送
    }

    if(ui->chb_send_automatic_clear->isChecked()){
        SendClear();
    }
}

//帮助
void MainWindow::Help(){
    QMessageBox msgBox;
    msgBox.setWindowTitle("帮助");
    msgBox.setText("1、在使用此应用程序之前，请确认此电脑已成功安装 CH340 驱动。若没有安装驱动，请前往 http://stcmcudata.com/STCISP/CH341SER.exe 下载安装。\n\n"
                   "2、若串口无法接收到数据，请检查 ‘暂停接收’ 或 ‘恢复接收’ 按钮现实的内容，当显示内容为 ‘暂停接收’ 时，即可正常接收数据。\n\n"
                   "3、请再次确认打开串口开关。\n\n"
                   "4、当设备从电脑上拔插后，请再次手动打开串口开关。\n\n"
                   "5、确保串口设备正确连接到电脑。");
    msgBox.exec();
}

