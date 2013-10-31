#ifndef _LoginForm_CPP
#define	_LoginForm_CPP

#include "LoginForm.h"

LoginForm::LoginForm()
{
    setupUi(this);
    connect(loginbtn, SIGNAL(clicked()), this, SLOT(loginclick()));
    connect(quitbtn, SIGNAL(clicked()), this, SLOT(close()));
}

void LoginForm::setupUi(QDialog *LoginForm)
{
    if (LoginForm->objectName().isEmpty())
        LoginForm->setObjectName(QString::fromUtf8("LoginForm"));
    LoginForm->setWindowModality(Qt::NonModal);
    LoginForm->resize(627, 414);
    loginbtn = new QPushButton(LoginForm);
    loginbtn->setObjectName(QString::fromUtf8("loginbtn"));
    loginbtn->setGeometry(QRect(140, 250, 114, 32));
    quitbtn = new QPushButton(LoginForm);
    quitbtn->setObjectName(QString::fromUtf8("quitbtn"));
    quitbtn->setGeometry(QRect(300, 250, 114, 32));
    usernametext = new QLineEdit(LoginForm);
    usernametext->setObjectName(QString::fromUtf8("usernametext"));
    usernametext->setGeometry(QRect(240, 140, 113, 22));
    passtext = new QLineEdit(LoginForm);
    passtext->setObjectName(QString::fromUtf8("passtext"));
    passtext->setGeometry(QRect(240, 190, 113, 22));
    passtext->setInputMask(QString::fromUtf8(""));
    passtext->setMaxLength(32767);
    passtext->setEchoMode(QLineEdit::Password);
    password = new QLabel(LoginForm);
    password->setObjectName(QString::fromUtf8("password"));
    password->setGeometry(QRect(130, 190, 62, 16));
    username = new QLabel(LoginForm);
    username->setObjectName(QString::fromUtf8("username"));
    username->setGeometry(QRect(130, 140, 62, 16));

    retranslateUi(LoginForm);

    QMetaObject::connectSlotsByName(LoginForm);
} // setupUi

void LoginForm::retranslateUi(QDialog *LoginForm)
{
    LoginForm->setWindowTitle(QApplication::translate("LoginForm", "User System Login", 0, QApplication::UnicodeUTF8));
    loginbtn->setText(QApplication::translate("LoginForm", "Login", 0, QApplication::UnicodeUTF8));
    quitbtn->setText(QApplication::translate("LoginForm", "Quit", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    usernametext->setToolTip(QApplication::translate("LoginForm", "Enter Username", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

#ifndef QT_NO_TOOLTIP
    passtext->setToolTip(QApplication::translate("LoginForm", "Enter Password", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    passtext->setText(QString());
    passtext->setPlaceholderText(QString());
    password->setText(QApplication::translate("LoginForm", "Password", 0, QApplication::UnicodeUTF8));
    username->setText(QApplication::translate("LoginForm", "Username", 0, QApplication::UnicodeUTF8));
} // retranslateUi

LoginForm::~LoginForm()
{
}

void LoginForm::loginclick()
{
    if (usernametext->text() == "Admin" && passtext->text() == "123456")
    {
        QMessageBox::information(this, "Success", "Password Correct");
    }
    else
    {
        QMessageBox::information(this, "Failure", "Password Incorrect");
    }
}

#endif