#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

#include <QTimer>
#include <QString>
#include <QByteArray>

#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;


private slots:

    //连接信号槽
    void ConnectSignal();

    //界面初始化显示设置
    void WidgetInitial();

    //针对串口的操作
    void SerialPortOn();
    void SerialPortOff();
    void SerialPortSetBaud();
    void SerialPortSetDataBit();
    void SerialPortSetFlowContronl();
    void SerialPortSetParity();
    void SerialPortSetStopBit();

    //针对定时器的操作
    void UpdateErrorType();
    void UpdateSerialPortNumber();
    void UpdateSendAutomaic();
    void UpdateReceive();

    //针对接收区
    void ReceiveClear();
    void ReceivePause();
    void ReceiveTextDisplay();
    void ReceiveHexDisplay();

    //针对发送区
    void SendClear();
    void SendAutomatic();
    void SendAutomaticTime();
    void SendData();

    //帮助按钮
    void Help();

private:
    QSerialPort *my_serial_port_ = new QSerialPort(this);

    QSerialPortInfo *my_serial_port_info_ = new QSerialPortInfo();

    QTimer *timer_error_type = new QTimer();
    QTimer *timer_serial_port_number = new QTimer();
    QTimer *timer_send_automatic = new QTimer();
    QTimer *timer_receive_data = new QTimer();

    QString serial_port_name = "";
};

#endif // MAINWINDOW_H
