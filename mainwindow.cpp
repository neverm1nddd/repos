#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setMinimumWidth(850);
    this->setMinimumHeight(550);

    ui->loginLineEdit->setFocus();

    setAlignmentToFormWidget();
    setFontsToFormWidget();
    setStyleSheetFormWidget();

    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    db.setDatabaseName("postgres");
    db.setHostName("localhost");
    db.setUserName("postgres");
    db.setPassword("1");
    if(!db.open())
        this->close();

    qry = new QSqlQuery(db);
    qry->prepare("select * from table1;");
    qry->exec();
    while(qry->next())
        qDebug()<<qry->value(0).toString();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    int width = event->size().width();
    int height = event->size().height();

    int partWidth = width/4;
    int partHeight = height/12;

    ui->stackedWidget->setGeometry(0,0,width,height);

    //ОКНО ВХОДА
    ui->mainLoginPage->setGeometry(0,0,width,height);

    ui->signTitleLabel->setGeometry(width/2-partWidth/2, partHeight, partWidth, partHeight);

    ui->loginLineEdit->setGeometry(width/2-partWidth/2,3.5*partHeight,partWidth,partHeight/2);
    ui->loginLabel->setGeometry(ui->loginLineEdit->x()-10-partWidth/2,ui->loginLineEdit->y()-0.25*partHeight, partWidth/2,partHeight);

    ui->passworlLineEdit->setGeometry(width/2-partWidth/2,5.5*partHeight,partWidth,partHeight/2);
    ui->passwordLabel->setGeometry(ui->passworlLineEdit->x()-10-partWidth/2,ui->passworlLineEdit->y()-0.25*partHeight,partWidth/2,partHeight);

    ui->signInBtn->setGeometry(width/2-10-partWidth,8.5*partHeight,partWidth,partHeight);
    ui->registBtn->setGeometry(ui->signInBtn->x()+ui->signInBtn->width()+20,ui->signInBtn->y(),partWidth,partHeight);
    ui->passwordForgotBtn->setGeometry(width/2-partWidth/2,ui->signInBtn->y()+ui->signInBtn->height()+partHeight/4,partWidth,partHeight/2);

    //ОКНО РЕГИСТРАЦИИ
    ui->mainRegistPage->setGeometry(0,0,width,height);

}

void MainWindow::setAlignmentToFormWidget()
{
    ui->signTitleLabel->setAlignment(Qt::AlignCenter);
    ui->loginLabel->setAlignment(Qt::AlignCenter);
    ui->passwordLabel->setAlignment(Qt::AlignCenter);
    ui->loginLineEdit->setAlignment(Qt::AlignCenter);
    ui->passworlLineEdit->setAlignment(Qt::AlignCenter);
}

void MainWindow::setFontsToFormWidget()
{
    ui->signTitleLabel->setFont(TITLE_FONT);
    ui->loginLabel->setFont(LABEL_FONT);
    ui->passwordLabel->setFont(LABEL_FONT);

    ui->loginLineEdit->setFont(LINE_EDIT_FONT);
    ui->passworlLineEdit->setFont(LINE_EDIT_FONT);

    ui->passwordForgotBtn->setFont(BTN_FONT);
    ui->signInBtn->setFont(BTN_FONT);
    ui->registBtn->setFont(BTN_FONT);
}

void MainWindow::setStyleSheetFormWidget()
{
    ui->mainLoginPage->setStyleSheet("background-color: rgb(44, 42, 55);");

    ui->signTitleLabel->setStyleSheet("color: rgb(205, 246, 253); font-weight: bold");
    ui->loginLabel->setStyleSheet("color: rgb(205, 246, 253);");
    ui->passwordLabel->setStyleSheet("color: rgb(205, 246, 253);");
    ui->loginLineEdit->setStyleSheet("border:1px solid rgb(205, 246, 253); color: rgb(205, 246, 253); border-radius: 6px;");
    ui->passworlLineEdit->setStyleSheet("border:1px solid rgb(205, 246, 253); color: rgb(205, 246, 253); border-radius: 6px;");

    ui->passwordForgotBtn->setStyleSheet("border: none; color: rgb(205, 246, 253); text-decoration: underline;");
    ui->signInBtn->setStyleSheet("border:1px solid rgb(44, 42, 55); border-radius: 7px; background-color: rgb(205, 246, 253); color: rgb(44, 42, 55); font-weight: bold");
    ui->registBtn->setStyleSheet("border:1px solid rgb(44, 42, 55); border-radius: 7px; background-color: rgb(205, 246, 253); color: rgb(44, 42, 55); font-weight: bold");
}
