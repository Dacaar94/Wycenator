#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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


    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();


    void on_resetbutton_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();



    void on_actionKopiuj_triggered();

    void on_actionWklej_triggered();

    void on_actionWytnij_triggered();

    void on_actionWstecz_triggered();

    void on_actionNaprz_d_triggered();

    void on_actionNowy_triggered();

    void on_actionOtw_rz_triggered();

    void on_actionZapisz_triggered();

    void on_actionZapisz_jako_triggered();

    void on_actionInstrukcja_triggered();

    void on_actionO_programie_triggered();

    void on_actionO_tw_rcy_triggered();

    void on_actionZako_cz_triggered();

private:

    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
