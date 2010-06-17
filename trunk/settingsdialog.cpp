#include "settingsdialog.h"
#include "canvas.h"
#include <QtGui>

SettingsDialog::SettingsDialog(Canvas *c, QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
    canvas = c;
    QSize d;
    bool wA;
    canvas->getParametres(d, C_Color, N_Color, wA);

    updateColorLabel(label_3,C_Color);
    updateColorLabel(label,N_Color);
    wArc->setChecked(wA);
    hCanvas->setText(QString::number(d.height()));
    wCanvas->setText(QString::number(d.width()));

    // Запрет на ввод левых значений в размер канваса
    QRegExp rx("[1-9]\\d{0,3}");
    hCanvas->setValidator(new QRegExpValidator(rx,0));
    wCanvas->setValidator(new QRegExpValidator(rx,0));
}

SettingsDialog::~SettingsDialog()
{
    this->~QDialog();
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
        retranslateUi(this);
        break;
    default:
        break;
    }
}

void SettingsDialog::updateColorLabel(QLabel *label, const QColor &color)
{
    QPixmap pixmap(90, 18);
    pixmap.fill(color);
    label->setPixmap(pixmap);
}

void SettingsDialog::chooseColor(QLabel *label, QColor *color)
{
    QColor newColor = QColorDialog::getColor(*color, this);
    if (newColor.isValid()) {
        *color = newColor;
        updateColorLabel(label, *color);
    }
}

void SettingsDialog::on_BgColor_clicked()
{
    chooseColor(label_3, &C_Color);
}

void SettingsDialog::on_nodeColor_clicked()
{
    chooseColor(label, &N_Color);
}

void SettingsDialog::on_buttonBox_accepted()
{
    canvas->setChanges(QSize(hCanvas->text().toUInt(), wCanvas->text().toUInt()),
                       C_Color,N_Color,wArc);
    this->accept();
}

void SettingsDialog::on_buttonBox_rejected()
{
    this->reject();
}
