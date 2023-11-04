#include "mainwindow.h"
#include "ui_mainwindow.h"
#define MAX_PROPERTIES 100

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    propertyCounter = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::clearPropertyFields()
{
    ui -> Propertyid_blank -> clear();
    ui -> Address_blank -> clear();
    ui -> Rooms_blank -> clear();
    ui -> Floor_blank -> clear();
    ui -> Price_blank -> clear();
    ui -> Contactno_blank -> clear();
}


void MainWindow::clearPropertyFields1()
{
    ui -> Propertyid_blank_3 -> clear();
    ui -> Address_blank_2 -> clear();
    ui -> Rooms_blank_2 -> clear();
    ui -> Floor_blank_2 -> clear();
    ui -> Price_blank_2 -> clear();
    ui -> Contactno_blank_2 -> clear();
}


void MainWindow::clearPropertyFields2()
{
    ui -> Propertyid_blank_2 -> clear();
}


void MainWindow::savePropertiesToFile()
{
    QFile file("RealEstatePropertyManagement.txt");

    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream stream(&file);
        stream << "\n\n============================= ALL PROPERTIES =============================\n\n";

        for (const Property &property : properties)
        {
            stream << "ID : " << property.id << "\n";
            stream << "Address : " << property.address << "\n";
            stream << "Number of Rooms : " << property.num_rooms << "\n";
            stream << "Floor No. : " << property.floor << "\n";
            stream << "Price in $ : " << property.price << "\n";
            stream << "Contact No. : " << property.contactno << "\n\n";
        }

        file.close();
    }
}


void MainWindow::on_LoginButton_clicked()
{
    Login_email = ui -> Email_blank -> text();
    Login_password = ui -> Password_blank -> text();

    if(Login_email == "admin" && Login_password == "admin123@")
    {
        ui -> stackedWidget -> setCurrentIndex(1);
    }
    else
    {
        QMessageBox :: warning(this, "Login", "Wrong password. Try again!");
    }

    ui -> Email_blank -> clear();
    ui -> Password_blank -> clear();
}


void MainWindow::on_Savebutton_clicked()
{
    QString Property_id = ui -> Propertyid_blank -> text();
    QString Property_address = ui -> Address_blank -> text();
    QString Property_rooms = ui -> Rooms_blank -> text();
    QString Property_floor = ui -> Floor_blank -> text();
    QString Property_price = ui -> Price_blank -> text();
    QString Property_contactno = ui -> Contactno_blank -> text();

    Property newProperty;
    newProperty.id = Property_id;
    newProperty.address = Property_address;
    newProperty.num_rooms = Property_rooms;
    newProperty.floor = Property_floor;
    newProperty.price = Property_price;
    newProperty.contactno = Property_contactno;
    properties.append(newProperty);

    propertyCounter++;

    QMessageBox::information(this, "Property Addition", "Property added successfully.");

    clearPropertyFields();

    for (const Property &property : properties)
    {
        propertyData = "ID : " + property.id + "\n";
        propertyData += "Address : " + property.address + "\n";
        propertyData += "Number of Rooms : " + property.num_rooms + "\n";
        propertyData += "Floor No. : " + property.floor + "\n";
        propertyData += "Price in $ : " + property.price + "\n";
        propertyData += "Contact No. : " + property.contactno + "\n\n";
    }


    QFile file("RealEstatePropertyManagement.txt");

    if (file.open(QIODevice::Append | QIODevice::Text))
    {
        QTextStream stream(&file);
        stream << propertyData;
        file.close();
    }
}


void MainWindow::on_Viewproperty_clicked()
{
    QFile file("RealEstatePropertyManagement.txt");

    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream stream(&file);
        QString propertyData;

        while (!stream.atEnd())
        {
            propertyData += stream.readLine() + "\n";
        }

        file.close();

        ui->stackedWidget->setCurrentIndex(5);
        ui->Mainwindow_7->setText(propertyData);
    }
}


void MainWindow::on_Viewproperty_2_clicked()
{
    QFile file("RealEstatePropertyManagement.txt");

    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream stream(&file);
        QString propertyData;

        while (!stream.atEnd())
        {
            propertyData += stream.readLine() + "\n";
        }

        file.close();

        ui->stackedWidget->setCurrentIndex(5);
        ui->Mainwindow_7->setText(propertyData);
    }
}


void MainWindow::on_Updatebutton_clicked()
{
    QString Property_id = ui -> Propertyid_blank_3 -> text();
    QString Property_address = ui -> Address_blank_2 -> text();
    QString Property_rooms = ui -> Rooms_blank_2 -> text();
    QString Property_floor = ui -> Floor_blank_2 -> text();
    QString Property_price = ui -> Price_blank_2 -> text();
    QString Property_contactno = ui -> Contactno_blank_2 -> text();

    int propertyIndex = -1;

    for (int i = 0; i < properties.size(); i++)
    {
        if (properties[i].id == Property_id)
        {
            propertyIndex = i;
            break;
        }
    }

    if (propertyIndex != -1)
    {
        properties[propertyIndex].address = Property_address;
        properties[propertyIndex].num_rooms = Property_rooms;
        properties[propertyIndex].floor = Property_floor;
        properties[propertyIndex].price = Property_price;
        properties[propertyIndex].contactno = Property_contactno;

        savePropertiesToFile();

        QMessageBox::information(this, "Property Update", "Property updated successfully.");
    }
    else
    {
        QMessageBox::warning(this, "Property Update", "Invalid Property ID. Try again!");
    }

    clearPropertyFields1();
}


void MainWindow::on_Deletebutton_clicked()
{
    QString Property_id = ui -> Propertyid_blank_2 -> text();

    int propertyIndex = -1;

    for (int i = 0; i < properties.size(); i++)
    {
        if (properties[i].id == Property_id)
        {
            propertyIndex = i;
            break;
        }
    }

    if (propertyIndex != -1)
    {
        properties.removeAt(propertyIndex);

        savePropertiesToFile();

        QMessageBox::information(this, "Property Deletion", "Property has been deleted successfully.");
    }
    else
    {
        QMessageBox::warning(this, "Property Deletion", "Invalid Property ID. Try again!");
    }

    clearPropertyFields2();
}


void MainWindow::on_Backbutton_clicked()
{
    this -> close();
}


void MainWindow::on_Owners_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_Tenants_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_Logoutbutton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_Backbutton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_Logoutbutton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_Backbutton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_Logoutbutton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_Addproperty_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_Backbutton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_Updateproperty_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_Deleteproperty_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_Backbutton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_Backbutton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_Backbutton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
