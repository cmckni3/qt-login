#ifndef _LoginForm_H
#define	_LoginForm_H

#include <QtGui>

class LoginForm : public QDialog
{
    Q_OBJECT
public:
    LoginForm();
    QPushButton *loginbtn;
    QPushButton *quitbtn;
    QLineEdit *usernametext;
    QLineEdit *passtext;
    QLabel *password;
    QLabel *username;
    void setupUi(QDialog *LoginForm);
    void retranslateUi(QDialog *LoginForm);
    virtual ~LoginForm();
public slots:
    void loginclick();
private:
    QString user;
    QString pass;
};

#endif	/* _LoginForm_H */
