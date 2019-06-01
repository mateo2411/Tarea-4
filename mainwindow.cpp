#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Number9_clicked()
{
    resultado = resultado+"9";
    if(punto>0)
    {
        numero1 = numero1+(9*pow(0.1,punto));
        punto++;
    }
    else {
        numero1 = (numero1*10)+9;
    }
    ui->lcdNumber->display(numero1);
    ui->textEdit->setText(resultado);
}

void MainWindow::on_Number8_clicked()
{
    resultado = resultado+"8";
    if(punto>0)
    {
        numero1 = numero1+(8*pow(0.1,punto));
        punto++;
    }
    else{
        numero1 = (numero1*10)+8;
    }
    ui->lcdNumber->display(numero1);
    ui->textEdit->setText(resultado);
}

void MainWindow::on_Number7_clicked()
{
    resultado=resultado+"7";
    if(punto>0)
    {
        numero1 = numero1+(7*pow(0.1,punto));
        punto++;
    }
    else {
        numero1 = (numero1*10)+7;
    }
    ui->lcdNumber->display(numero1);
    ui->textEdit->setText(resultado);
}

void MainWindow::on_Number6_clicked()
{
    resultado=resultado+"6";
    if(punto>0)
    {
        numero1 = numero1+(6*pow(0.1,punto));
        punto++;
    }
    else{
        numero1 = (numero1*10)+6;
    }
    ui->lcdNumber->display(numero1);
    ui->textEdit->setText(resultado);
}

void MainWindow::on_Number5_clicked()
{
    resultado=resultado+"5";
    if(punto>0)
    {
        numero1 = numero1+(5*pow(0.1,punto));
        punto++;
    }
    else{
        numero1 = (numero1*10)+5;
    }
    ui->lcdNumber->display(numero1);
    ui->textEdit->setText(resultado);
}

void MainWindow::on_Number4_clicked()
{
    resultado=resultado+"4";
    if(punto>0)
    {
        numero1 = numero1+(4*pow(0.1,punto));
        punto++;
    }
    else{
        numero1 = (numero1*10)+4;
    }
    ui->lcdNumber->display(numero1);
    ui->textEdit->setText(resultado);
}

void MainWindow::on_Number3_clicked()
{
    resultado=resultado+"3";
    if(punto>0)
    {
        numero1 = numero1+(3*pow(0.1,punto));
        punto++;
    }
    else{
        numero1 = (numero1*10)+3;
    }
    ui->lcdNumber->display(numero1);
    ui->textEdit->setText(resultado);
}

void MainWindow::on_Number2_clicked()
{
    resultado=resultado+"2";
    if(punto>0)
    {
        numero1 = numero1+(2*pow(0.1,punto));
        punto++;
    }
    else{
        numero1 = (numero1*10)+2;
    }
    ui->lcdNumber->display(numero1);
    ui->textEdit->setText(resultado);
}

void MainWindow::on_Number1_clicked()
{
    resultado=resultado+"1";
    if(punto>0)
    {
        numero1 = numero1+(1*pow(0.1,punto));
        punto++;
    }
    else{
        numero1 = (numero1*10)+1;
    }
    ui->lcdNumber->display(numero1);
    ui->textEdit->setText(resultado);
}

void MainWindow::on_Number0_clicked()
{
    resultado=resultado+"0";
    if(punto>0)
    {
        punto++;
    }
    else{
        numero1 = numero1*10;
    }
    ui->lcdNumber->display(numero1);
    ui->textEdit->setText(resultado);
}

void MainWindow::on_Punto_clicked()
{
    resultado=resultado+".";
    punto=1;
    ui->textEdit->setText(resultado);
}

void MainWindow::on_Suma_clicked()
{
    resultado = resultado+" + ";
    operacion = '+';
    numero2 = numero1;
    numero1 = 0;
    punto=0;
    ui->lcdNumber->display(numero1);
    ui->textEdit->setText(resultado);
}

void MainWindow::on_Igual_clicked()
{
    switch(operacion)
    {
        case '+': numero1 = numero1 + numero2;
                  ui->lcdNumber->display(numero1);
                  resultado2 = QString::number(numero1);
                  resultado = resultado+" = "+resultado2;
                  ui->textEdit->setText(resultado);
                  break;

        case '*': numero1 = numero1 * numero2;
                  ui->lcdNumber->display(numero1);
                  resultado2 = QString::number(numero1);
                  resultado = resultado+" = "+resultado2;
                  ui->textEdit->setText(resultado);
                  break;

        case '-': numero1 = numero2 - numero1;
                  ui->lcdNumber->display(numero1);
                  resultado2 = QString::number(numero1);
                  resultado = resultado+" = "+resultado2;
                  ui->textEdit->setText(resultado);
                  break;

        case '/': numero1 = numero2/numero1;
                  ui->lcdNumber->display(numero1);
                  resultado2 = QString::number(numero1);
                  resultado = resultado+" = "+resultado2;
                  ui->textEdit->setText(resultado);
                  break;
    }
}

void MainWindow::on_Multi_clicked()
{
    resultado = resultado+" * ";
    operacion = '*';
    numero2 = numero1;
    numero1 = 0;
    punto=0;
    ui->lcdNumber->display(numero1);
    ui->textEdit->setText(resultado);
}

void MainWindow::on_Resta_clicked()
{
    resultado = resultado+" - ";
    operacion = '-';
    numero2 = numero1;
    numero1 = 0;
    punto=0;
    ui->lcdNumber->display(numero1);
    ui->textEdit->setText(resultado);
}

void MainWindow::on_Division_clicked()
{
    resultado = resultado+" ÷ ";
    operacion = '/';
    numero2 = numero1;
    numero1 = 0;
    punto=0;
    ui->lcdNumber->display(numero1);
    ui->textEdit->setText(resultado);
}

void MainWindow::on_Borrar_clicked()
{
    resultado=' ';
    numero1=0;
    numero2=0;
    punto=0;
    ui->lcdNumber->display(numero1);
    ui->textEdit->setText(resultado);
}
