#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QList>
#include <QLineEdit>

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


////////////////// Przycisk Dalej//////////////////////////////////////////
void MainWindow::on_pushButton_4_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->tabWidget->setCurrentIndex(2);
}

/////////////////////// Przyciski Wstecz////////////////////////////////////
void MainWindow::on_pushButton_6_clicked()
{
   ui->tabWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}

/////////////////////// Resetowanie Programu////////////////////////////////
void MainWindow::on_resertbutton_clicked()
{
    // Zatwierdzanie Resetu
    // Trzeba zmienić YES i NO na PL
QMessageBox::StandardButton reply=QMessageBox::question(this,"RESET?","Czy napewno chcesz zresetować aplikcaję?",
                                                        QMessageBox::Yes | QMessageBox::No);
   if(reply == QMessageBox::Yes)
   {
    // Reset Combo Box
    ui->comboBox->setCurrentIndex(0);


    // Reset Line Edit

    foreach(QLineEdit* le, findChildren<QLineEdit*>())
    {
    le->clear();
    }

    // Reset Radio Button


    foreach(QRadioButton* rb, findChildren<QRadioButton*>())
    {
        rb->setAutoExclusive(false);
        rb->setChecked(false);
    }

    // Reset Spin Box

    foreach(QSpinBox* sb, findChildren<QSpinBox*>())
    {
        sb->setValue(0);
    }

     // Reset Check Box

    foreach(QCheckBox* cb, findChildren<QCheckBox*>())
    {
        cb->setChecked(false);
    }
}

else
   { qDebug() << "No is clicked";}
}

////////////////KAROL KOPIOWANIE//////////////////







/////////////////////////////////KOPIUJ/////////////////////////
void MainWindow::on_actionKopiuj_triggered()
{
    const QList< QLineEdit*> zajebista_lista = ui->tabWidget->findChildren<QLineEdit*>();

    for (auto* line_edit : zajebista_lista)
    {
        line_edit->copy();
    }





//   this->ui->lineEdit->copy();
//    this->ui->lineEdit_2->copy();

}
/////////////////////////////////WKLEJ/////////////////////////
void MainWindow::on_actionWklej_triggered()
{
    const QList< QLineEdit*> zajebista_lista = ui->tabWidget->findChildren<QLineEdit*>();

    for (auto* line_edit : zajebista_lista)
    {
        line_edit->paste();
    }

//    this->ui->lineEdit->paste();
//    this->ui->lineEdit_2->paste();

}
