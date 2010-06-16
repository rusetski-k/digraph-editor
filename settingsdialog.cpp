#include "settingsdialog.h"
#include "ui_settingsdialog.h"

SettingsDialog::SettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingsDialog)
{

    ui->setupUi(this);
//    this->setWindowIcon(QIcon(":/images/settings.png"));
//    this->setWindowTitle("Canvas settings");

//
//    textColorButton = new QPushButton(groupBox_2);
//    textColorButton->setObjectName(QString::fromUtf8("textColorButton"));
//
//    gridLayout->addWidget(textColorButton, 1, 2, 1, 1);
}

SettingsDialog::~SettingsDialog()
{
    delete ui;
}

void SettingsDialog::Show()
{
    this->show();
}


void SettingsDialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
