#include "LoginForm.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    LoginForm form;
    form.show();

    return app.exec();
}
