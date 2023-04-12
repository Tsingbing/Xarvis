#include "form.h"
#include "ui_form.h"
#include <QDebug>
#include <QStringList>
#include <iostream>

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);


    QStringList source_strings = {"", "人工旋钮申请", "HMI申请", "平台申请", "私有can申请"};
    QStringList drive_mode = {"人工驾驶", "自动驾驶", "远程接管"};

    QString cur_mode = drive_mode.at(2);
    QString desire_mode = drive_mode.at(1);

    QStringList result;
    result << "收到" << source_strings.at(2) << desire_mode << "命令";
    QString s = result.join("");
    std::cout << s.toStdString() << std::endl;
    qDebug() << s;
    //qDebug() << result.join("");
}

Form::~Form()
{
    delete ui;
}
