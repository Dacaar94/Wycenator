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


    QMessageBox messageBox(QMessageBox::Question,
                ("Reset?"),
                ("Czy napewno chcesz zresetować aplikację?"),
                QMessageBox::Yes | QMessageBox::No,
                this);
    messageBox.setButtonText(QMessageBox::Yes,"Tak");
    messageBox.setButtonText(QMessageBox::No,"Nie");
    if(messageBox.exec() == QMessageBox::Yes)

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


/////////////////////////////////KOPIUJ  /////////////////////////
void MainWindow::on_actionKopiuj_triggered()
{
    const QList< QLineEdit*> listlec = ui->tabWidget->findChildren<QLineEdit*>();

    for (auto* lenc : listlec)
    {
        lenc->copy();
    }

}
/////////////////////////////////WKLEJ/////////////////////////
void MainWindow::on_actionWklej_triggered()
{
    if (qobject_cast<QLineEdit*>(this->focusWidget()))
        qobject_cast<QLineEdit*>(this->focusWidget())->paste();

}
/////////////////////////////////WYTNIJ/////////////////////////
void MainWindow::on_actionWytnij_triggered()
{
    const QList< QLineEdit*> listleq = ui->tabWidget->findChildren<QLineEdit*>();

    for (auto* lenq : listleq)
    {
        lenq->cut();
    }
}

void MainWindow::on_actionWstecz_triggered()
{
    ///////////////// WSTECZ /////////////////
}

void MainWindow::on_actionNaprz_d_triggered()
{
    //////////////////// NAPRZOD //////////////////
}

void MainWindow::on_actionNowy_triggered()
{
    //////////////////// NOWY //////////////////
}

void MainWindow::on_actionOtw_rz_triggered()
{
    //////////////////// OTWÓRZ  //////////////////
}

void MainWindow::on_actionZapisz_triggered()
{
    //////////////////// ZAPISZ //////////////////
}

void MainWindow::on_actionZapisz_jako_triggered()
{
    //////////////////// ZAPISZ JAKO //////////////////
}

void MainWindow::on_actionInstrukcja_triggered()
{
    //////////////////// INSTRUKCJA //////////////////
}

void MainWindow::on_actionO_programie_triggered()
{
    //////////////////// O PROGRAMIE //////////////////
}

void MainWindow::on_actionO_tw_rcy_triggered()
{
    //////////////////// O TWORCY //////////////////
}

void MainWindow::on_actionZako_cz_triggered()
{
   //////////////////// ZAKONCZ //////////////////
}
