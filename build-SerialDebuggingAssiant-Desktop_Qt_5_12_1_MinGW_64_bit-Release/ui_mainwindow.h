/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_11;
    QLabel *label;
    QHBoxLayout *horizontalLayout_17;
    QPlainTextEdit *pte_receive;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rb_serial_port_on;
    QRadioButton *rb_serial_port_off;
    QLabel *label_12;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QComboBox *cb_serial_port_number;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QComboBox *cb_serial_port_baud;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QComboBox *cb_serial_port_data_bit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QComboBox *cb_serial_port_flow_contronl;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QComboBox *cb_serial_port_parity;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QComboBox *cb_serial_port_stop_bit;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pb_receive_clear;
    QPushButton *pb_receive_pause;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *chb_receive_text_display;
    QCheckBox *chb_receive_hex_display;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_11;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_18;
    QPlainTextEdit *pte_send;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *pb_send_clear;
    QCheckBox *chb_send_hex;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *chb_send_automatic;
    QSpinBox *sp_send_time;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *pb_send;
    QCheckBox *chb_send_clear_automatic;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_15;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_14;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_erro_type;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_18;
    QPushButton *pb_help;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(880, 671);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        verticalLayout_11->addWidget(label);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        pte_receive = new QPlainTextEdit(centralWidget);
        pte_receive->setObjectName(QString::fromUtf8("pte_receive"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pte_receive->sizePolicy().hasHeightForWidth());
        pte_receive->setSizePolicy(sizePolicy);
        pte_receive->setContextMenuPolicy(Qt::DefaultContextMenu);
        pte_receive->setAcceptDrops(false);

        horizontalLayout_17->addWidget(pte_receive);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rb_serial_port_on = new QRadioButton(centralWidget);
        rb_serial_port_on->setObjectName(QString::fromUtf8("rb_serial_port_on"));

        horizontalLayout->addWidget(rb_serial_port_on);

        rb_serial_port_off = new QRadioButton(centralWidget);
        rb_serial_port_off->setObjectName(QString::fromUtf8("rb_serial_port_off"));

        horizontalLayout->addWidget(rb_serial_port_off);


        horizontalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_3);

        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy2);

        verticalLayout_5->addWidget(label_12);


        verticalLayout_8->addLayout(verticalLayout_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font);

        horizontalLayout_9->addWidget(label_4);

        cb_serial_port_number = new QComboBox(centralWidget);
        cb_serial_port_number->addItem(QString());
        cb_serial_port_number->setObjectName(QString::fromUtf8("cb_serial_port_number"));
        sizePolicy1.setHeightForWidth(cb_serial_port_number->sizePolicy().hasHeightForWidth());
        cb_serial_port_number->setSizePolicy(sizePolicy1);
        cb_serial_port_number->setFont(font);

        horizontalLayout_9->addWidget(cb_serial_port_number);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setFont(font);

        horizontalLayout_8->addWidget(label_5);

        cb_serial_port_baud = new QComboBox(centralWidget);
        cb_serial_port_baud->addItem(QString());
        cb_serial_port_baud->addItem(QString());
        cb_serial_port_baud->addItem(QString());
        cb_serial_port_baud->addItem(QString());
        cb_serial_port_baud->addItem(QString());
        cb_serial_port_baud->addItem(QString());
        cb_serial_port_baud->addItem(QString());
        cb_serial_port_baud->addItem(QString());
        cb_serial_port_baud->addItem(QString());
        cb_serial_port_baud->setObjectName(QString::fromUtf8("cb_serial_port_baud"));
        sizePolicy1.setHeightForWidth(cb_serial_port_baud->sizePolicy().hasHeightForWidth());
        cb_serial_port_baud->setSizePolicy(sizePolicy1);
        cb_serial_port_baud->setFont(font);

        horizontalLayout_8->addWidget(cb_serial_port_baud);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setFont(font);

        horizontalLayout_7->addWidget(label_6);

        cb_serial_port_data_bit = new QComboBox(centralWidget);
        cb_serial_port_data_bit->addItem(QString());
        cb_serial_port_data_bit->addItem(QString());
        cb_serial_port_data_bit->addItem(QString());
        cb_serial_port_data_bit->addItem(QString());
        cb_serial_port_data_bit->addItem(QString());
        cb_serial_port_data_bit->setObjectName(QString::fromUtf8("cb_serial_port_data_bit"));
        sizePolicy1.setHeightForWidth(cb_serial_port_data_bit->sizePolicy().hasHeightForWidth());
        cb_serial_port_data_bit->setSizePolicy(sizePolicy1);
        cb_serial_port_data_bit->setFont(font);

        horizontalLayout_7->addWidget(cb_serial_port_data_bit);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);
        label_7->setFont(font);

        horizontalLayout_6->addWidget(label_7);

        cb_serial_port_flow_contronl = new QComboBox(centralWidget);
        cb_serial_port_flow_contronl->addItem(QString());
        cb_serial_port_flow_contronl->addItem(QString());
        cb_serial_port_flow_contronl->addItem(QString());
        cb_serial_port_flow_contronl->addItem(QString());
        cb_serial_port_flow_contronl->setObjectName(QString::fromUtf8("cb_serial_port_flow_contronl"));
        sizePolicy1.setHeightForWidth(cb_serial_port_flow_contronl->sizePolicy().hasHeightForWidth());
        cb_serial_port_flow_contronl->setSizePolicy(sizePolicy1);
        cb_serial_port_flow_contronl->setFont(font);

        horizontalLayout_6->addWidget(cb_serial_port_flow_contronl);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setFont(font);

        horizontalLayout_5->addWidget(label_8);

        cb_serial_port_parity = new QComboBox(centralWidget);
        cb_serial_port_parity->addItem(QString());
        cb_serial_port_parity->addItem(QString());
        cb_serial_port_parity->addItem(QString());
        cb_serial_port_parity->addItem(QString());
        cb_serial_port_parity->addItem(QString());
        cb_serial_port_parity->addItem(QString());
        cb_serial_port_parity->setObjectName(QString::fromUtf8("cb_serial_port_parity"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(cb_serial_port_parity->sizePolicy().hasHeightForWidth());
        cb_serial_port_parity->setSizePolicy(sizePolicy4);
        cb_serial_port_parity->setFont(font);

        horizontalLayout_5->addWidget(cb_serial_port_parity);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setFont(font);

        horizontalLayout_4->addWidget(label_9);

        cb_serial_port_stop_bit = new QComboBox(centralWidget);
        cb_serial_port_stop_bit->addItem(QString());
        cb_serial_port_stop_bit->addItem(QString());
        cb_serial_port_stop_bit->addItem(QString());
        cb_serial_port_stop_bit->addItem(QString());
        cb_serial_port_stop_bit->setObjectName(QString::fromUtf8("cb_serial_port_stop_bit"));
        sizePolicy1.setHeightForWidth(cb_serial_port_stop_bit->sizePolicy().hasHeightForWidth());
        cb_serial_port_stop_bit->setSizePolicy(sizePolicy1);
        cb_serial_port_stop_bit->setFont(font);

        horizontalLayout_4->addWidget(cb_serial_port_stop_bit);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_8->addLayout(verticalLayout);


        verticalLayout_9->addLayout(verticalLayout_8);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);

        verticalLayout_6->addWidget(label_10);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(9);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        pb_receive_clear = new QPushButton(centralWidget);
        pb_receive_clear->setObjectName(QString::fromUtf8("pb_receive_clear"));
        sizePolicy3.setHeightForWidth(pb_receive_clear->sizePolicy().hasHeightForWidth());
        pb_receive_clear->setSizePolicy(sizePolicy3);
        pb_receive_clear->setFont(font);

        horizontalLayout_10->addWidget(pb_receive_clear);

        pb_receive_pause = new QPushButton(centralWidget);
        pb_receive_pause->setObjectName(QString::fromUtf8("pb_receive_pause"));
        sizePolicy3.setHeightForWidth(pb_receive_pause->sizePolicy().hasHeightForWidth());
        pb_receive_pause->setSizePolicy(sizePolicy3);
        pb_receive_pause->setFont(font);

        horizontalLayout_10->addWidget(pb_receive_pause);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        chb_receive_text_display = new QCheckBox(centralWidget);
        chb_receive_text_display->setObjectName(QString::fromUtf8("chb_receive_text_display"));
        sizePolicy1.setHeightForWidth(chb_receive_text_display->sizePolicy().hasHeightForWidth());
        chb_receive_text_display->setSizePolicy(sizePolicy1);

        horizontalLayout_11->addWidget(chb_receive_text_display);

        chb_receive_hex_display = new QCheckBox(centralWidget);
        chb_receive_hex_display->setObjectName(QString::fromUtf8("chb_receive_hex_display"));
        sizePolicy1.setHeightForWidth(chb_receive_hex_display->sizePolicy().hasHeightForWidth());
        chb_receive_hex_display->setSizePolicy(sizePolicy1);

        horizontalLayout_11->addWidget(chb_receive_hex_display);


        verticalLayout_2->addLayout(horizontalLayout_11);


        verticalLayout_6->addLayout(verticalLayout_2);


        verticalLayout_9->addLayout(verticalLayout_6);


        horizontalLayout_17->addLayout(verticalLayout_9);


        verticalLayout_11->addLayout(horizontalLayout_17);


        verticalLayout_12->addLayout(verticalLayout_11);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_7->addWidget(label_11);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout_7->addWidget(label_2);


        verticalLayout_12->addLayout(verticalLayout_7);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        pte_send = new QPlainTextEdit(centralWidget);
        pte_send->setObjectName(QString::fromUtf8("pte_send"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pte_send->sizePolicy().hasHeightForWidth());
        pte_send->setSizePolicy(sizePolicy5);

        horizontalLayout_18->addWidget(pte_send);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        pb_send_clear = new QPushButton(centralWidget);
        pb_send_clear->setObjectName(QString::fromUtf8("pb_send_clear"));
        sizePolicy1.setHeightForWidth(pb_send_clear->sizePolicy().hasHeightForWidth());
        pb_send_clear->setSizePolicy(sizePolicy1);
        pb_send_clear->setFont(font);

        horizontalLayout_13->addWidget(pb_send_clear);

        chb_send_hex = new QCheckBox(centralWidget);
        chb_send_hex->setObjectName(QString::fromUtf8("chb_send_hex"));
        sizePolicy1.setHeightForWidth(chb_send_hex->sizePolicy().hasHeightForWidth());
        chb_send_hex->setSizePolicy(sizePolicy1);

        horizontalLayout_13->addWidget(chb_send_hex);


        verticalLayout_4->addLayout(horizontalLayout_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        chb_send_automatic = new QCheckBox(centralWidget);
        chb_send_automatic->setObjectName(QString::fromUtf8("chb_send_automatic"));
        sizePolicy1.setHeightForWidth(chb_send_automatic->sizePolicy().hasHeightForWidth());
        chb_send_automatic->setSizePolicy(sizePolicy1);

        horizontalLayout_12->addWidget(chb_send_automatic);

        sp_send_time = new QSpinBox(centralWidget);
        sp_send_time->setObjectName(QString::fromUtf8("sp_send_time"));
        sizePolicy1.setHeightForWidth(sp_send_time->sizePolicy().hasHeightForWidth());
        sp_send_time->setSizePolicy(sizePolicy1);
        sp_send_time->setMaximum(99999999);
        sp_send_time->setSingleStep(10);
        sp_send_time->setValue(10);

        horizontalLayout_12->addWidget(sp_send_time);


        verticalLayout_4->addLayout(horizontalLayout_12);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy4.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy4);

        verticalLayout_3->addWidget(label_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        pb_send = new QPushButton(centralWidget);
        pb_send->setObjectName(QString::fromUtf8("pb_send"));
        sizePolicy1.setHeightForWidth(pb_send->sizePolicy().hasHeightForWidth());
        pb_send->setSizePolicy(sizePolicy1);
        pb_send->setFont(font);

        horizontalLayout_14->addWidget(pb_send);

        chb_send_clear_automatic = new QCheckBox(centralWidget);
        chb_send_clear_automatic->setObjectName(QString::fromUtf8("chb_send_clear_automatic"));
        sizePolicy1.setHeightForWidth(chb_send_clear_automatic->sizePolicy().hasHeightForWidth());
        chb_send_clear_automatic->setSizePolicy(sizePolicy1);

        horizontalLayout_14->addWidget(chb_send_clear_automatic);


        verticalLayout_3->addLayout(horizontalLayout_14);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout_18->addLayout(verticalLayout_4);


        verticalLayout_12->addLayout(horizontalLayout_18);


        verticalLayout_15->addLayout(verticalLayout_12);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout_13->addWidget(label_19);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        label_14->setFont(font1);
        label_14->setAcceptDrops(true);

        verticalLayout_14->addWidget(label_14);

        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        QFont font2;
        font2.setPointSize(9);
        label_15->setFont(font2);

        verticalLayout_14->addWidget(label_15);


        horizontalLayout_15->addLayout(verticalLayout_14);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_2);

        label_erro_type = new QLabel(centralWidget);
        label_erro_type->setObjectName(QString::fromUtf8("label_erro_type"));
        label_erro_type->setFont(font2);

        horizontalLayout_15->addWidget(label_erro_type);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_3);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy3.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy3);
        label_18->setFont(font2);

        verticalLayout_10->addWidget(label_18);

        pb_help = new QPushButton(centralWidget);
        pb_help->setObjectName(QString::fromUtf8("pb_help"));
        sizePolicy4.setHeightForWidth(pb_help->sizePolicy().hasHeightForWidth());
        pb_help->setSizePolicy(sizePolicy4);
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        pb_help->setFont(font3);
        pb_help->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_10->addWidget(pb_help);


        horizontalLayout_15->addLayout(verticalLayout_10);


        verticalLayout_13->addLayout(horizontalLayout_15);


        verticalLayout_15->addLayout(verticalLayout_13);


        gridLayout->addLayout(verticalLayout_15, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 880, 23));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "\346\216\245\346\224\266\345\214\272 : ", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\345\274\200\345\205\263", nullptr));
        rb_serial_port_on->setText(QApplication::translate("MainWindow", "\345\274\200", nullptr));
        rb_serial_port_off->setText(QApplication::translate("MainWindow", "\345\205\263", nullptr));
        label_12->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "\345\217\257\347\224\250\344\270\262\345\217\243", nullptr));
        cb_serial_port_number->setItemText(0, QApplication::translate("MainWindow", "\346\232\202\346\227\240\345\217\257\347\224\250\347\253\257\345\217\243", nullptr));

        label_5->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        cb_serial_port_baud->setItemText(0, QApplication::translate("MainWindow", "1200", nullptr));
        cb_serial_port_baud->setItemText(1, QApplication::translate("MainWindow", "2400", nullptr));
        cb_serial_port_baud->setItemText(2, QApplication::translate("MainWindow", "4800", nullptr));
        cb_serial_port_baud->setItemText(3, QApplication::translate("MainWindow", "9600", nullptr));
        cb_serial_port_baud->setItemText(4, QApplication::translate("MainWindow", "19200", nullptr));
        cb_serial_port_baud->setItemText(5, QApplication::translate("MainWindow", "38400", nullptr));
        cb_serial_port_baud->setItemText(6, QApplication::translate("MainWindow", "57600", nullptr));
        cb_serial_port_baud->setItemText(7, QApplication::translate("MainWindow", "115200", nullptr));
        cb_serial_port_baud->setItemText(8, QApplication::translate("MainWindow", "\346\234\252\347\237\245", nullptr));

        label_6->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", nullptr));
        cb_serial_port_data_bit->setItemText(0, QApplication::translate("MainWindow", "8", nullptr));
        cb_serial_port_data_bit->setItemText(1, QApplication::translate("MainWindow", "7", nullptr));
        cb_serial_port_data_bit->setItemText(2, QApplication::translate("MainWindow", "6", nullptr));
        cb_serial_port_data_bit->setItemText(3, QApplication::translate("MainWindow", "5", nullptr));
        cb_serial_port_data_bit->setItemText(4, QApplication::translate("MainWindow", "\346\234\252\347\237\245", nullptr));

        label_7->setText(QApplication::translate("MainWindow", "\346\265\201\346\216\247\345\210\266", nullptr));
        cb_serial_port_flow_contronl->setItemText(0, QApplication::translate("MainWindow", "\346\227\240", nullptr));
        cb_serial_port_flow_contronl->setItemText(1, QApplication::translate("MainWindow", "\347\241\254\344\273\266\346\216\247\345\210\266", nullptr));
        cb_serial_port_flow_contronl->setItemText(2, QApplication::translate("MainWindow", "\350\275\257\344\273\266\346\216\247\345\210\266", nullptr));
        cb_serial_port_flow_contronl->setItemText(3, QApplication::translate("MainWindow", "\346\234\252\347\237\245", nullptr));

        label_8->setText(QApplication::translate("MainWindow", "\345\245\207\345\201\266\346\240\241\351\252\214", nullptr));
        cb_serial_port_parity->setItemText(0, QApplication::translate("MainWindow", "\346\227\240", nullptr));
        cb_serial_port_parity->setItemText(1, QApplication::translate("MainWindow", "\345\201\266\346\225\260\346\240\241\351\252\214", nullptr));
        cb_serial_port_parity->setItemText(2, QApplication::translate("MainWindow", "\345\245\207\346\225\260\346\240\241\351\252\214", nullptr));
        cb_serial_port_parity->setItemText(3, QApplication::translate("MainWindow", "\347\251\272\346\240\274\346\240\241\351\252\214", nullptr));
        cb_serial_port_parity->setItemText(4, QApplication::translate("MainWindow", "\346\240\207\345\277\227\346\240\241\351\252\214", nullptr));
        cb_serial_port_parity->setItemText(5, QApplication::translate("MainWindow", "\346\234\252\347\237\245", nullptr));

        label_9->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", nullptr));
        cb_serial_port_stop_bit->setItemText(0, QApplication::translate("MainWindow", "1", nullptr));
        cb_serial_port_stop_bit->setItemText(1, QApplication::translate("MainWindow", "1.5", nullptr));
        cb_serial_port_stop_bit->setItemText(2, QApplication::translate("MainWindow", "2", nullptr));
        cb_serial_port_stop_bit->setItemText(3, QApplication::translate("MainWindow", "\346\234\252\347\237\245", nullptr));

        label_10->setText(QString());
        pb_receive_clear->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\216\245\346\224\266", nullptr));
        pb_receive_pause->setText(QApplication::translate("MainWindow", "\346\232\202\345\201\234\346\216\245\346\224\266", nullptr));
        chb_receive_text_display->setText(QApplication::translate("MainWindow", "\346\226\207\346\234\254\346\230\276\347\244\272", nullptr));
        chb_receive_hex_display->setText(QApplication::translate("MainWindow", "hex\346\230\276\347\244\272", nullptr));
        label_11->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\345\214\272 : ", nullptr));
        pb_send_clear->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\345\217\221\351\200\201", nullptr));
        chb_send_hex->setText(QApplication::translate("MainWindow", "hex\345\217\221\351\200\201", nullptr));
        chb_send_automatic->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\345\217\221\351\200\201", nullptr));
        label_13->setText(QString());
        pb_send->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        chb_send_clear_automatic->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\346\270\205\347\251\272", nullptr));
        label_19->setText(QString());
        label_14->setText(QApplication::translate("MainWindow", "Download : https://github.com/Chamico", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "/QT-Serial-Port-Debugging-Assisant", nullptr));
        label_erro_type->setText(QApplication::translate("MainWindow", "\346\227\240", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "Connect : ChenTianhai114@163.com", nullptr));
        pb_help->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
