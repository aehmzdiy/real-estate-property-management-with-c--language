/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *Mainwindow_2;
    QLineEdit *Email_blank;
    QLineEdit *Password_blank;
    QPushButton *LoginButton;
    QLabel *Email;
    QLabel *Password;
    QLabel *Home;
    QPushButton *Backbutton;
    QWidget *page2;
    QLabel *MainWindow_3;
    QLabel *ListView;
    QLabel *Typeofcustomer;
    QRadioButton *Owners;
    QRadioButton *Tenants;
    QPushButton *Logoutbutton;
    QWidget *page_3;
    QLabel *MainWindow_4;
    QRadioButton *Addproperty;
    QRadioButton *Viewproperty;
    QRadioButton *Updateproperty;
    QRadioButton *Deleteproperty;
    QLabel *Objectives;
    QPushButton *Backbutton_2;
    QPushButton *Logoutbutton_2;
    QWidget *page_4;
    QLabel *Mainwindow_5;
    QRadioButton *Viewproperty_2;
    QLabel *Objectives_2;
    QPushButton *Backbutton_3;
    QPushButton *Logoutbutton_3;
    QWidget *page_5;
    QLabel *Mainwindow_6;
    QPushButton *Backbutton_4;
    QPushButton *Savebutton;
    QLineEdit *Propertyid_blank;
    QLineEdit *Address_blank;
    QLineEdit *Rooms_blank;
    QLineEdit *Floor_blank;
    QLineEdit *Price_blank;
    QLabel *Propertyid;
    QLabel *Address;
    QLabel *Rooms;
    QLabel *Floor;
    QLabel *Price;
    QLineEdit *Contactno_blank;
    QLabel *Contactno;
    QWidget *page_6;
    QTextEdit *Mainwindow_7;
    QPushButton *Backbutton_5;
    QWidget *page_7;
    QLabel *Mainwindow_8;
    QLabel *Propertyid_2;
    QLineEdit *Propertyid_blank_2;
    QPushButton *Backbutton_6;
    QPushButton *Deletebutton;
    QWidget *page_8;
    QLabel *Mainwindow_9;
    QPushButton *Backbutton_7;
    QLabel *Address_2;
    QLabel *Propertyid_3;
    QLabel *Rooms_2;
    QLabel *Floor_2;
    QLabel *Price_2;
    QLabel *Contactno_2;
    QLineEdit *Propertyid_blank_3;
    QLineEdit *Address_blank_2;
    QLineEdit *Rooms_blank_2;
    QLineEdit *Floor_blank_2;
    QLineEdit *Price_blank_2;
    QLineEdit *Contactno_blank_2;
    QPushButton *Updatebutton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setMouseTracking(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 800, 600));
        page = new QWidget();
        page->setObjectName("page");
        Mainwindow_2 = new QLabel(page);
        Mainwindow_2->setObjectName("Mainwindow_2");
        Mainwindow_2->setGeometry(QRect(0, 0, 800, 600));
        Mainwindow_2->setPixmap(QPixmap(QString::fromUtf8("../Docs/stock-vector-abstract-letter-h-real-estate-logo-design-apartment-logo-design-mortgage-logo-2017256162.jpg")));
        Email_blank = new QLineEdit(page);
        Email_blank->setObjectName("Email_blank");
        Email_blank->setGeometry(QRect(300, 470, 271, 24));
        QFont font;
        font.setFamilies({QString::fromUtf8("Georgia")});
        font.setPointSize(10);
        Email_blank->setFont(font);
        Email_blank->setEchoMode(QLineEdit::Normal);
        Password_blank = new QLineEdit(page);
        Password_blank->setObjectName("Password_blank");
        Password_blank->setGeometry(QRect(300, 510, 271, 24));
        Password_blank->setFont(font);
        Password_blank->setEchoMode(QLineEdit::Password);
        LoginButton = new QPushButton(page);
        LoginButton->setObjectName("LoginButton");
        LoginButton->setGeometry(QRect(630, 490, 80, 24));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Georgia")});
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        LoginButton->setFont(font1);
        LoginButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(170, 170, 255);\n"
"border-color: rgb(170, 170, 255);\n"
"font: 10pt \"Georgia\";"));
        Email = new QLabel(page);
        Email->setObjectName("Email");
        Email->setGeometry(QRect(230, 471, 61, 21));
        Email->setStyleSheet(QString::fromUtf8("font: 10pt \"Georgia\";"));
        Password = new QLabel(page);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(230, 507, 61, 31));
        Password->setStyleSheet(QString::fromUtf8("font: 10pt \"Georgia\";"));
        Home = new QLabel(page);
        Home->setObjectName("Home");
        Home->setGeometry(QRect(670, 0, 131, 71));
        Home->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"font: 700 14pt \"Segoe UI\";"));
        Backbutton = new QPushButton(page);
        Backbutton->setObjectName("Backbutton");
        Backbutton->setGeometry(QRect(20, 20, 80, 24));
        Backbutton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(170, 170, 255);\n"
"border-color: rgb(170, 170, 255);\n"
"font: 10pt \"Georgia\";"));
        stackedWidget->addWidget(page);
        page2 = new QWidget();
        page2->setObjectName("page2");
        MainWindow_3 = new QLabel(page2);
        MainWindow_3->setObjectName("MainWindow_3");
        MainWindow_3->setGeometry(QRect(0, 0, 800, 600));
        MainWindow_3->setPixmap(QPixmap(QString::fromUtf8("../Docs/photo_2023-10-01_22-33-42.jpg")));
        MainWindow_3->setScaledContents(true);
        ListView = new QLabel(page2);
        ListView->setObjectName("ListView");
        ListView->setGeometry(QRect(0, 0, 221, 71));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(false);
        ListView->setFont(font2);
        ListView->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 14pt \"Segoe UI\";\n"
""));
        Typeofcustomer = new QLabel(page2);
        Typeofcustomer->setObjectName("Typeofcustomer");
        Typeofcustomer->setGeometry(QRect(50, 70, 361, 51));
        Typeofcustomer->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Georgia\";"));
        Owners = new QRadioButton(page2);
        Owners->setObjectName("Owners");
        Owners->setGeometry(QRect(90, 140, 101, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Georgia")});
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setItalic(false);
        Owners->setFont(font3);
        Owners->setStyleSheet(QString::fromUtf8("font: 14pt \"Georgia\";\n"
"background-color: rgb(255, 255, 255);\n"
""));
        Tenants = new QRadioButton(page2);
        Tenants->setObjectName("Tenants");
        Tenants->setGeometry(QRect(90, 200, 101, 41));
        Tenants->setStyleSheet(QString::fromUtf8("font: 14pt \"Georgia\";\n"
"background-color: rgb(255, 255, 255);"));
        Logoutbutton = new QPushButton(page2);
        Logoutbutton->setObjectName("Logoutbutton");
        Logoutbutton->setGeometry(QRect(140, 310, 80, 24));
        Logoutbutton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 10pt \"Georgia\";\n"
"background-color: rgb(170, 170, 255);\n"
"border-color: rgb(170, 170, 255);"));
        stackedWidget->addWidget(page2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        MainWindow_4 = new QLabel(page_3);
        MainWindow_4->setObjectName("MainWindow_4");
        MainWindow_4->setGeometry(QRect(0, 0, 800, 600));
        MainWindow_4->setPixmap(QPixmap(QString::fromUtf8("../Docs/photo_2023-10-01_22-33-42.jpg")));
        MainWindow_4->setScaledContents(true);
        Addproperty = new QRadioButton(page_3);
        Addproperty->setObjectName("Addproperty");
        Addproperty->setGeometry(QRect(80, 130, 191, 31));
        Addproperty->setFont(font3);
        Addproperty->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Georgia\";"));
        Viewproperty = new QRadioButton(page_3);
        Viewproperty->setObjectName("Viewproperty");
        Viewproperty->setGeometry(QRect(80, 170, 191, 31));
        Viewproperty->setFont(font3);
        Viewproperty->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Georgia\";"));
        Updateproperty = new QRadioButton(page_3);
        Updateproperty->setObjectName("Updateproperty");
        Updateproperty->setGeometry(QRect(80, 210, 191, 31));
        Updateproperty->setFont(font3);
        Updateproperty->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Georgia\";"));
        Deleteproperty = new QRadioButton(page_3);
        Deleteproperty->setObjectName("Deleteproperty");
        Deleteproperty->setGeometry(QRect(80, 250, 191, 31));
        Deleteproperty->setFont(font3);
        Deleteproperty->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Georgia\";"));
        Objectives = new QLabel(page_3);
        Objectives->setObjectName("Objectives");
        Objectives->setGeometry(QRect(30, 60, 151, 71));
        Objectives->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 14pt \"Segoe UI\";"));
        Backbutton_2 = new QPushButton(page_3);
        Backbutton_2->setObjectName("Backbutton_2");
        Backbutton_2->setGeometry(QRect(20, 20, 80, 24));
        Backbutton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(170, 170, 255);\n"
"border-color: rgb(170, 170, 255);\n"
"font: 10pt \"Georgia\";"));
        Logoutbutton_2 = new QPushButton(page_3);
        Logoutbutton_2->setObjectName("Logoutbutton_2");
        Logoutbutton_2->setGeometry(QRect(140, 340, 80, 24));
        Logoutbutton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(170, 170, 255);\n"
"border-color: rgb(170, 170, 255);\n"
"font: 10pt \"Georgia\";"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        Mainwindow_5 = new QLabel(page_4);
        Mainwindow_5->setObjectName("Mainwindow_5");
        Mainwindow_5->setGeometry(QRect(0, 0, 800, 600));
        Mainwindow_5->setPixmap(QPixmap(QString::fromUtf8("../Docs/photo_2023-10-01_22-33-42.jpg")));
        Mainwindow_5->setScaledContents(true);
        Viewproperty_2 = new QRadioButton(page_4);
        Viewproperty_2->setObjectName("Viewproperty_2");
        Viewproperty_2->setGeometry(QRect(70, 80, 151, 41));
        Viewproperty_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Georgia\";"));
        Objectives_2 = new QLabel(page_4);
        Objectives_2->setObjectName("Objectives_2");
        Objectives_2->setGeometry(QRect(650, 0, 221, 71));
        Objectives_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 14pt \"Segoe UI\";"));
        Backbutton_3 = new QPushButton(page_4);
        Backbutton_3->setObjectName("Backbutton_3");
        Backbutton_3->setGeometry(QRect(20, 20, 80, 24));
        Backbutton_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(170, 170, 255);\n"
"border-color: rgb(170, 170, 255);"));
        Logoutbutton_3 = new QPushButton(page_4);
        Logoutbutton_3->setObjectName("Logoutbutton_3");
        Logoutbutton_3->setGeometry(QRect(110, 190, 80, 24));
        Logoutbutton_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(170, 170, 255);\n"
"border-color: rgb(170, 170, 255);\n"
"font: 10pt \"Georgia\";"));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        Mainwindow_6 = new QLabel(page_5);
        Mainwindow_6->setObjectName("Mainwindow_6");
        Mainwindow_6->setGeometry(QRect(0, 0, 800, 600));
        Mainwindow_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Mainwindow_6->setPixmap(QPixmap(QString::fromUtf8("../Docs/photo_2023-10-01_22-33-42.jpg")));
        Mainwindow_6->setScaledContents(true);
        Backbutton_4 = new QPushButton(page_5);
        Backbutton_4->setObjectName("Backbutton_4");
        Backbutton_4->setGeometry(QRect(20, 20, 80, 24));
        Backbutton_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(170, 170, 255);\n"
"border-color: rgb(170, 170, 255);\n"
"font: 10pt \"Georgia\";"));
        Savebutton = new QPushButton(page_5);
        Savebutton->setObjectName("Savebutton");
        Savebutton->setGeometry(QRect(190, 470, 80, 24));
        Savebutton->setFont(font);
        Savebutton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(170, 170, 255);\n"
"border-color: rgb(170, 170, 255);"));
        Propertyid_blank = new QLineEdit(page_5);
        Propertyid_blank->setObjectName("Propertyid_blank");
        Propertyid_blank->setGeometry(QRect(110, 90, 321, 31));
        Propertyid_blank->setFont(font);
        Address_blank = new QLineEdit(page_5);
        Address_blank->setObjectName("Address_blank");
        Address_blank->setGeometry(QRect(110, 150, 321, 31));
        Address_blank->setFont(font);
        Rooms_blank = new QLineEdit(page_5);
        Rooms_blank->setObjectName("Rooms_blank");
        Rooms_blank->setGeometry(QRect(110, 210, 321, 31));
        Rooms_blank->setFont(font);
        Floor_blank = new QLineEdit(page_5);
        Floor_blank->setObjectName("Floor_blank");
        Floor_blank->setGeometry(QRect(110, 270, 321, 31));
        Floor_blank->setFont(font);
        Price_blank = new QLineEdit(page_5);
        Price_blank->setObjectName("Price_blank");
        Price_blank->setGeometry(QRect(110, 330, 321, 31));
        Price_blank->setFont(font);
        Propertyid = new QLabel(page_5);
        Propertyid->setObjectName("Propertyid");
        Propertyid->setGeometry(QRect(20, 85, 71, 41));
        Propertyid->setFont(font);
        Address = new QLabel(page_5);
        Address->setObjectName("Address");
        Address->setGeometry(QRect(20, 145, 71, 41));
        Address->setFont(font);
        Rooms = new QLabel(page_5);
        Rooms->setObjectName("Rooms");
        Rooms->setGeometry(QRect(20, 200, 71, 51));
        Rooms->setFont(font);
        Floor = new QLabel(page_5);
        Floor->setObjectName("Floor");
        Floor->setGeometry(QRect(20, 265, 71, 41));
        Floor->setFont(font);
        Price = new QLabel(page_5);
        Price->setObjectName("Price");
        Price->setGeometry(QRect(20, 325, 81, 41));
        Price->setFont(font);
        Contactno_blank = new QLineEdit(page_5);
        Contactno_blank->setObjectName("Contactno_blank");
        Contactno_blank->setGeometry(QRect(110, 390, 321, 31));
        Contactno_blank->setFont(font);
        Contactno = new QLabel(page_5);
        Contactno->setObjectName("Contactno");
        Contactno->setGeometry(QRect(20, 385, 81, 41));
        Contactno->setFont(font);
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        Mainwindow_7 = new QTextEdit(page_6);
        Mainwindow_7->setObjectName("Mainwindow_7");
        Mainwindow_7->setGeometry(QRect(0, 0, 800, 600));
        Mainwindow_7->setStyleSheet(QString::fromUtf8("font: 14pt \"Times New Roman\";"));
        Backbutton_5 = new QPushButton(page_6);
        Backbutton_5->setObjectName("Backbutton_5");
        Backbutton_5->setGeometry(QRect(20, 20, 80, 24));
        Backbutton_5->setFont(font);
        Backbutton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);"));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        Mainwindow_8 = new QLabel(page_7);
        Mainwindow_8->setObjectName("Mainwindow_8");
        Mainwindow_8->setGeometry(QRect(0, 0, 800, 600));
        Mainwindow_8->setPixmap(QPixmap(QString::fromUtf8("../Docs/photo_2023-10-01_22-33-42.jpg")));
        Mainwindow_8->setScaledContents(true);
        Propertyid_2 = new QLabel(page_7);
        Propertyid_2->setObjectName("Propertyid_2");
        Propertyid_2->setGeometry(QRect(20, 85, 71, 41));
        Propertyid_2->setFont(font);
        Propertyid_blank_2 = new QLineEdit(page_7);
        Propertyid_blank_2->setObjectName("Propertyid_blank_2");
        Propertyid_blank_2->setGeometry(QRect(110, 90, 321, 31));
        Propertyid_blank_2->setFont(font);
        Backbutton_6 = new QPushButton(page_7);
        Backbutton_6->setObjectName("Backbutton_6");
        Backbutton_6->setGeometry(QRect(20, 20, 80, 24));
        Backbutton_6->setFont(font);
        Backbutton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);"));
        Deletebutton = new QPushButton(page_7);
        Deletebutton->setObjectName("Deletebutton");
        Deletebutton->setGeometry(QRect(190, 190, 80, 24));
        Deletebutton->setFont(font);
        Deletebutton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);"));
        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        Mainwindow_9 = new QLabel(page_8);
        Mainwindow_9->setObjectName("Mainwindow_9");
        Mainwindow_9->setGeometry(QRect(0, 0, 800, 600));
        Mainwindow_9->setPixmap(QPixmap(QString::fromUtf8("../Docs/photo_2023-10-01_22-33-42.jpg")));
        Mainwindow_9->setScaledContents(true);
        Backbutton_7 = new QPushButton(page_8);
        Backbutton_7->setObjectName("Backbutton_7");
        Backbutton_7->setGeometry(QRect(20, 20, 80, 24));
        Backbutton_7->setFont(font);
        Backbutton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);"));
        Address_2 = new QLabel(page_8);
        Address_2->setObjectName("Address_2");
        Address_2->setGeometry(QRect(20, 145, 71, 41));
        Address_2->setFont(font);
        Propertyid_3 = new QLabel(page_8);
        Propertyid_3->setObjectName("Propertyid_3");
        Propertyid_3->setGeometry(QRect(20, 85, 71, 41));
        Propertyid_3->setFont(font);
        Rooms_2 = new QLabel(page_8);
        Rooms_2->setObjectName("Rooms_2");
        Rooms_2->setGeometry(QRect(20, 200, 71, 51));
        Rooms_2->setFont(font);
        Floor_2 = new QLabel(page_8);
        Floor_2->setObjectName("Floor_2");
        Floor_2->setGeometry(QRect(20, 265, 71, 41));
        Floor_2->setFont(font);
        Price_2 = new QLabel(page_8);
        Price_2->setObjectName("Price_2");
        Price_2->setGeometry(QRect(20, 325, 81, 41));
        Price_2->setFont(font);
        Contactno_2 = new QLabel(page_8);
        Contactno_2->setObjectName("Contactno_2");
        Contactno_2->setGeometry(QRect(20, 385, 81, 41));
        Contactno_2->setFont(font);
        Propertyid_blank_3 = new QLineEdit(page_8);
        Propertyid_blank_3->setObjectName("Propertyid_blank_3");
        Propertyid_blank_3->setGeometry(QRect(110, 90, 321, 31));
        Propertyid_blank_3->setFont(font);
        Address_blank_2 = new QLineEdit(page_8);
        Address_blank_2->setObjectName("Address_blank_2");
        Address_blank_2->setGeometry(QRect(110, 150, 321, 31));
        Address_blank_2->setFont(font);
        Rooms_blank_2 = new QLineEdit(page_8);
        Rooms_blank_2->setObjectName("Rooms_blank_2");
        Rooms_blank_2->setGeometry(QRect(110, 210, 321, 31));
        Rooms_blank_2->setFont(font);
        Floor_blank_2 = new QLineEdit(page_8);
        Floor_blank_2->setObjectName("Floor_blank_2");
        Floor_blank_2->setGeometry(QRect(110, 270, 321, 31));
        Floor_blank_2->setFont(font);
        Price_blank_2 = new QLineEdit(page_8);
        Price_blank_2->setObjectName("Price_blank_2");
        Price_blank_2->setGeometry(QRect(110, 330, 321, 31));
        Price_blank_2->setFont(font);
        Contactno_blank_2 = new QLineEdit(page_8);
        Contactno_blank_2->setObjectName("Contactno_blank_2");
        Contactno_blank_2->setGeometry(QRect(110, 390, 321, 31));
        Contactno_blank_2->setFont(font);
        Updatebutton = new QPushButton(page_8);
        Updatebutton->setObjectName("Updatebutton");
        Updatebutton->setGeometry(QRect(190, 470, 80, 24));
        Updatebutton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);\n"
"font: 10pt \"Georgia\";"));
        stackedWidget->addWidget(page_8);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Mainwindow_2->setText(QString());
        Email_blank->setPlaceholderText(QCoreApplication::translate("MainWindow", "E-mail or username", nullptr));
        Password_blank->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter your password", nullptr));
        LoginButton->setText(QCoreApplication::translate("MainWindow", "LOG IN", nullptr));
        Email->setText(QCoreApplication::translate("MainWindow", "   E-mail", nullptr));
        Password->setText(QCoreApplication::translate("MainWindow", " Password", nullptr));
        Home->setText(QCoreApplication::translate("MainWindow", "     HOME", nullptr));
        Backbutton->setText(QCoreApplication::translate("MainWindow", "<  BACK", nullptr));
        MainWindow_3->setText(QString());
        ListView->setText(QCoreApplication::translate("MainWindow", "      List View:", nullptr));
        Typeofcustomer->setText(QCoreApplication::translate("MainWindow", "What type of customer you are?", nullptr));
        Owners->setText(QCoreApplication::translate("MainWindow", "Owners", nullptr));
        Tenants->setText(QCoreApplication::translate("MainWindow", "Tenants", nullptr));
        Logoutbutton->setText(QCoreApplication::translate("MainWindow", "LOG OUT", nullptr));
        MainWindow_4->setText(QString());
        Addproperty->setText(QCoreApplication::translate("MainWindow", "Add Property", nullptr));
        Viewproperty->setText(QCoreApplication::translate("MainWindow", "View Property", nullptr));
        Updateproperty->setText(QCoreApplication::translate("MainWindow", "Update Property", nullptr));
        Deleteproperty->setText(QCoreApplication::translate("MainWindow", "Delete Property", nullptr));
        Objectives->setText(QCoreApplication::translate("MainWindow", "     Objectives", nullptr));
        Backbutton_2->setText(QCoreApplication::translate("MainWindow", "<  BACK", nullptr));
        Logoutbutton_2->setText(QCoreApplication::translate("MainWindow", "LOG OUT", nullptr));
        Mainwindow_5->setText(QString());
        Viewproperty_2->setText(QCoreApplication::translate("MainWindow", "View Property", nullptr));
        Objectives_2->setText(QCoreApplication::translate("MainWindow", "     Objectives", nullptr));
        Backbutton_3->setText(QCoreApplication::translate("MainWindow", "<  BACK", nullptr));
        Logoutbutton_3->setText(QCoreApplication::translate("MainWindow", "LOG OUT", nullptr));
        Mainwindow_6->setText(QString());
        Backbutton_4->setText(QCoreApplication::translate("MainWindow", "<  BACK", nullptr));
        Savebutton->setText(QCoreApplication::translate("MainWindow", "SAVE", nullptr));
        Propertyid_blank->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter property ID", nullptr));
        Address_blank->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter property address", nullptr));
        Rooms_blank->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter number of rooms", nullptr));
        Floor_blank->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter floor no.", nullptr));
        Price_blank->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter property price in $", nullptr));
        Propertyid->setText(QCoreApplication::translate("MainWindow", "ID :", nullptr));
        Address->setText(QCoreApplication::translate("MainWindow", "Address :", nullptr));
        Rooms->setText(QCoreApplication::translate("MainWindow", "Rooms :", nullptr));
        Floor->setText(QCoreApplication::translate("MainWindow", "Floor :", nullptr));
        Price->setText(QCoreApplication::translate("MainWindow", "Price :", nullptr));
        Contactno_blank->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter contact no.", nullptr));
        Contactno->setText(QCoreApplication::translate("MainWindow", "Contact No. :", nullptr));
        Backbutton_5->setText(QCoreApplication::translate("MainWindow", "< BACK", nullptr));
        Mainwindow_8->setText(QString());
        Propertyid_2->setText(QCoreApplication::translate("MainWindow", "Property ID:", nullptr));
        Propertyid_blank_2->setText(QString());
        Propertyid_blank_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter property ID", nullptr));
        Backbutton_6->setText(QCoreApplication::translate("MainWindow", "< BACK", nullptr));
        Deletebutton->setText(QCoreApplication::translate("MainWindow", "DELETE", nullptr));
        Mainwindow_9->setText(QString());
        Backbutton_7->setText(QCoreApplication::translate("MainWindow", "< BACK", nullptr));
        Address_2->setText(QCoreApplication::translate("MainWindow", "Address :", nullptr));
        Propertyid_3->setText(QCoreApplication::translate("MainWindow", "ID :", nullptr));
        Rooms_2->setText(QCoreApplication::translate("MainWindow", "Rooms :", nullptr));
        Floor_2->setText(QCoreApplication::translate("MainWindow", "Floor :", nullptr));
        Price_2->setText(QCoreApplication::translate("MainWindow", "Price:", nullptr));
        Contactno_2->setText(QCoreApplication::translate("MainWindow", "Contact No. :", nullptr));
        Propertyid_blank_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter property ID", nullptr));
        Address_blank_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter/Update property address", nullptr));
        Rooms_blank_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter/Update number of rooms", nullptr));
        Floor_blank_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter/Update floor no.", nullptr));
        Price_blank_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter/Update property price in $", nullptr));
        Contactno_blank_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter/Update contact no.", nullptr));
        Updatebutton->setText(QCoreApplication::translate("MainWindow", "UPDATE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
