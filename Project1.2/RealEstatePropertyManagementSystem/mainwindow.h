#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QFile>
#include <QDir>
#include <QString>
#include <QTextStream>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_LoginButton_clicked();

    void on_Backbutton_clicked();

    void on_Owners_clicked();

    void on_Tenants_clicked();

    void on_Logoutbutton_clicked();

    void on_Backbutton_2_clicked();

    void on_Logoutbutton_2_clicked();

    void on_Backbutton_3_clicked();

    void on_Logoutbutton_3_clicked();

    void on_Addproperty_clicked();

    void on_Backbutton_4_clicked();

    void on_Savebutton_clicked();

    void on_Viewproperty_clicked();

    void on_Updateproperty_clicked();

    void on_Deleteproperty_clicked();

    void on_Viewproperty_2_clicked();

    void on_Backbutton_5_clicked();

    void on_Backbutton_6_clicked();

    void on_Deletebutton_clicked();

    void on_Backbutton_7_clicked();

    void on_Updatebutton_clicked();

     void savePropertiesToFile();

private:
    Ui::MainWindow *ui;
    QString Login_email, Login_password, Property_id, Property_address, Property_rooms, Property_floor, Property_price, Property_contactno, propertyData;
    int propertyCounter;
    void clearPropertyFields();
    void clearPropertyFields1();
    void clearPropertyFields2();
    void displayPropertyDetailsFromFile();
    struct Property
    {
        QString id;
        QString address;
        QString num_rooms;
        QString floor;
        QString price;
        QString contactno;
    };

    QVector<Property> properties;
};
#endif // MAINWINDOW_H
