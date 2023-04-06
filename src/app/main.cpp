
// #include <3rdparty/toml11/toml.hpp>
#include "form.h"
#include <filesystem>
#include <iostream>
#include <QApplication>
#include <QDebug>
#include <QWidget>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Form w;
    w.show();
    return a.exec();
}
