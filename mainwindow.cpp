#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

     ui->setupUi(this);
     QPalette palette;
      palette.setColor(QPalette::Foreground,Qt::green);
        ui->statusBar->setPalette(palette);
      ui->statusBar->showMessage("Status: [+]Ready");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_textEdit_textChanged()
{

   int len= ui->textEdit->toPlainText().length();
   QPalette palette;
    palette.setColor(QPalette::Foreground,Qt::green);
      ui->statusBar->setPalette(palette);
    ui->statusBar->showMessage("Success: [+]Plain Text Lenght: "+QString::number(len));
}

void MainWindow::on_pushButton_clicked()
{
     QString str = ui->textEdit->toPlainText();
     int len = str.length();
    if (len<1) {
        QPalette palette;
         palette.setColor(QPalette::Foreground,Qt::red);
           ui->statusBar->setPalette(palette);
          ui->statusBar->showMessage("Error: [-]Please put some text on above input box!!!");
          ui->textEdit_2->setText("");
    }
    else
    {
        QString atLetterhex="";
        int i;
        for(i=0;i<len;i++)
        {

            QChar ch = str.at(i);

            if(i!=len-1)
                 atLetterhex += "0x"+QString::number(ch.unicode(),16)+", ";
            else
                 atLetterhex += "0x"+QString::number(ch.unicode(),16);


        }
         ui->textEdit_2->setText(atLetterhex);
         int lenplain= ui->textEdit->toPlainText().length();
         QPalette palette;
          palette.setColor(QPalette::Foreground,Qt::green);
            ui->statusBar->setPalette(palette);
          ui->statusBar->showMessage("Success: [+]Plain Text Lenght: "+QString::number(lenplain)+" and Hex Text Lenght: "+QString::number(i));

    }
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->textEdit->setText("");
    ui->textEdit_2->setText("");
    ui->textEdit->setFocus();
    QPalette palette;
     palette.setColor(QPalette::Foreground,Qt::green);
       ui->statusBar->setPalette(palette);
       ui->statusBar->showMessage("Status: [+]Ready");
}
