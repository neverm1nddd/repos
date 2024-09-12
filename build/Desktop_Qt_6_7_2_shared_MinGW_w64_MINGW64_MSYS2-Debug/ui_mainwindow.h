/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *mainLoginPage;
    QLabel *signTitleLabel;
    QLineEdit *passworlLineEdit;
    QLineEdit *loginLineEdit;
    QPushButton *passwordForgotBtn;
    QPushButton *signInBtn;
    QPushButton *registBtn;
    QLabel *loginLabel;
    QLabel *passwordLabel;
    QWidget *mainRegistPage;
    QLabel *registTitleLabel;
    QLabel *registLoginLabel;
    QLabel *registPasswordLabel;
    QLabel *registRePasswordLabel;
    QLineEdit *registLoginLineEdit;
    QLineEdit *registPasswordLineEdit;
    QLineEdit *registRePasswordLineEdit;
    QPushButton *createUserBtn;
    QWidget *mainForgotPasswordPage;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(260, 130, 481, 401));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(210,210,210);"));
        mainLoginPage = new QWidget();
        mainLoginPage->setObjectName("mainLoginPage");
        signTitleLabel = new QLabel(mainLoginPage);
        signTitleLabel->setObjectName("signTitleLabel");
        signTitleLabel->setGeometry(QRect(140, 50, 49, 16));
        QFont font;
        font.setBold(true);
        signTitleLabel->setFont(font);
        passworlLineEdit = new QLineEdit(mainLoginPage);
        passworlLineEdit->setObjectName("passworlLineEdit");
        passworlLineEdit->setGeometry(QRect(140, 100, 113, 24));
        passworlLineEdit->setEchoMode(QLineEdit::EchoMode::Password);
        loginLineEdit = new QLineEdit(mainLoginPage);
        loginLineEdit->setObjectName("loginLineEdit");
        loginLineEdit->setGeometry(QRect(140, 150, 113, 24));
        passwordForgotBtn = new QPushButton(mainLoginPage);
        passwordForgotBtn->setObjectName("passwordForgotBtn");
        passwordForgotBtn->setGeometry(QRect(150, 220, 80, 24));
        QFont font1;
        font1.setUnderline(true);
        passwordForgotBtn->setFont(font1);
        passwordForgotBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        signInBtn = new QPushButton(mainLoginPage);
        signInBtn->setObjectName("signInBtn");
        signInBtn->setGeometry(QRect(60, 270, 80, 24));
        signInBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        registBtn = new QPushButton(mainLoginPage);
        registBtn->setObjectName("registBtn");
        registBtn->setGeometry(QRect(160, 260, 80, 24));
        registBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        loginLabel = new QLabel(mainLoginPage);
        loginLabel->setObjectName("loginLabel");
        loginLabel->setGeometry(QRect(120, 370, 49, 16));
        QFont font2;
        font2.setBold(false);
        loginLabel->setFont(font2);
        passwordLabel = new QLabel(mainLoginPage);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setGeometry(QRect(120, 330, 49, 16));
        stackedWidget->addWidget(mainLoginPage);
        mainRegistPage = new QWidget();
        mainRegistPage->setObjectName("mainRegistPage");
        registTitleLabel = new QLabel(mainRegistPage);
        registTitleLabel->setObjectName("registTitleLabel");
        registTitleLabel->setGeometry(QRect(230, 50, 49, 16));
        registLoginLabel = new QLabel(mainRegistPage);
        registLoginLabel->setObjectName("registLoginLabel");
        registLoginLabel->setGeometry(QRect(80, 120, 49, 16));
        registPasswordLabel = new QLabel(mainRegistPage);
        registPasswordLabel->setObjectName("registPasswordLabel");
        registPasswordLabel->setGeometry(QRect(80, 160, 49, 16));
        registRePasswordLabel = new QLabel(mainRegistPage);
        registRePasswordLabel->setObjectName("registRePasswordLabel");
        registRePasswordLabel->setGeometry(QRect(80, 210, 49, 16));
        registLoginLineEdit = new QLineEdit(mainRegistPage);
        registLoginLineEdit->setObjectName("registLoginLineEdit");
        registLoginLineEdit->setGeometry(QRect(200, 130, 113, 24));
        registPasswordLineEdit = new QLineEdit(mainRegistPage);
        registPasswordLineEdit->setObjectName("registPasswordLineEdit");
        registPasswordLineEdit->setGeometry(QRect(200, 180, 113, 24));
        registRePasswordLineEdit = new QLineEdit(mainRegistPage);
        registRePasswordLineEdit->setObjectName("registRePasswordLineEdit");
        registRePasswordLineEdit->setGeometry(QRect(200, 230, 113, 24));
        createUserBtn = new QPushButton(mainRegistPage);
        createUserBtn->setObjectName("createUserBtn");
        createUserBtn->setGeometry(QRect(210, 300, 80, 24));
        stackedWidget->addWidget(mainRegistPage);
        mainForgotPasswordPage = new QWidget();
        mainForgotPasswordPage->setObjectName("mainForgotPasswordPage");
        stackedWidget->addWidget(mainForgotPasswordPage);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        signTitleLabel->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        passwordForgotBtn->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\261\321\213\320\273\320\270 \320\277\320\260\321\200\320\276\320\273\321\214?", nullptr));
        signInBtn->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        registBtn->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        loginLabel->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        passwordLabel->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        registTitleLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        registLoginLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        registPasswordLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        registRePasswordLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        createUserBtn->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
