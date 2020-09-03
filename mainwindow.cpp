#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QList>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//LISTY


// Przycisk Dalej >> Nastepna Zakladka
void MainWindow::on_pushButton_4_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->tabWidget->setCurrentIndex(2);
}

// Resetowanie Programu
void MainWindow::on_resertbutton_clicked()
{
    // Zatwierdzanie Resetu
    // Trzeba zmienić YES i NO na PL
QMessageBox::StandardButton reply=QMessageBox::question(this,"RESET?","Czy napewno chcesz zresetować aplikcaję?",
                                                        QMessageBox::Yes | QMessageBox::No);
   if(reply == QMessageBox::Yes)
   {
    // Reset Combo Box
//    ui->comboBox->setCurrentIndex(0);
//    ui->lineEdit->clear();

    // Reset Line Edit
//    ui->lineEdit_2->clear();
//    ui->lineEdit_3->clear();
//    ui->lineEdit_4->clear();
//    ui->lineEdit_5->clear();
//    ui->lineEdit_6->clear();
//    ui->lineEdit_7->clear();
//    ui->lineEdit_8->clear();
//    ui->lineEdit_9->clear();

//    foreach(QLineEdit* le, findChildren<QLineEdit*>())
//    {
//    le->clear();
//    }

    // Reset Radio Button
    ui->radioButton->setAutoExclusive(false);
    ui->radioButton->setChecked(false);
    ui->radioButton_2->setAutoExclusive(false);
    ui->radioButton_2->setChecked(false);
    ui->radioButton_3->setAutoExclusive(false);
    ui->radioButton_3->setChecked(false);
    ui->radioButton_4->setAutoExclusive(false);
    ui->radioButton_4->setChecked(false);
    ui->radioButton_5->setAutoExclusive(false);
    ui->radioButton_5->setChecked(false);
    ui->radioButton_6->setAutoExclusive(false);
    ui->radioButton_6->setChecked(false);

    // Reset Spin Box
     ui->spinBox->setValue(0);
     ui->spinBox_2->setValue(0);
     ui->spinBox_3->setValue(0);
     ui->spinBox_4->setValue(0);

     // Reset Check Box
     ui->checkBox->setChecked(false);
     ui->checkBox_2->setChecked(false);

}

else
   { qDebug() << "No is clicked";}
}

// Przyciski Wstecz
void MainWindow::on_pushButton_6_clicked()
{
   ui->tabWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}


