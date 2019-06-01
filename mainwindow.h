#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_Number9_clicked();

    void on_Number8_clicked();

    void on_Number1_clicked();

    void on_Number7_clicked();

    void on_Number6_clicked();

    void on_Number5_clicked();

    void on_Number4_clicked();

    void on_Number3_clicked();

    void on_Number2_clicked();

    void on_Number0_clicked();

    void on_Punto_clicked();

    void on_Suma_clicked();

    void on_Igual_clicked();

    void on_Multi_clicked();

    void on_Resta_clicked();

    void on_Division_clicked();

    void on_Borrar_clicked();

private:
    Ui::MainWindow *ui;
    char operacion;
    double numero1 = 0;
    double numero2 = 0;
    int punto = 0;
    QString resultado;
    QString resultado2;
};

#endif // MAINWINDOW_H
