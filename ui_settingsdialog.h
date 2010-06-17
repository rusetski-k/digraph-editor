/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created: Thu 17. Jun 20:15:29 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QCheckBox *wArc;
    QPushButton *nodeColor;
    QPushButton *BgColor;
    QLabel *Vertexes;
    QLabel *label_2;
    QLabel *Canv;
    QLabel *label_4;
    QLineEdit *wCanvas;
    QLineEdit *hCanvas;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(308, 262);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        SettingsDialog->setWindowIcon(icon);
        wArc = new QCheckBox(SettingsDialog);
        wArc->setObjectName(QString::fromUtf8("wArc"));
        wArc->setGeometry(QRect(140, 110, 111, 31));
        nodeColor = new QPushButton(SettingsDialog);
        nodeColor->setObjectName(QString::fromUtf8("nodeColor"));
        nodeColor->setGeometry(QRect(190, 156, 70, 23));
        nodeColor->setFocusPolicy(Qt::NoFocus);
        BgColor = new QPushButton(SettingsDialog);
        BgColor->setObjectName(QString::fromUtf8("BgColor"));
        BgColor->setGeometry(QRect(189, 187, 71, 23));
        Vertexes = new QLabel(SettingsDialog);
        Vertexes->setObjectName(QString::fromUtf8("Vertexes"));
        Vertexes->setGeometry(QRect(33, 159, 51, 21));
        label_2 = new QLabel(SettingsDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 60, 51, 21));
        Canv = new QLabel(SettingsDialog);
        Canv->setObjectName(QString::fromUtf8("Canv"));
        Canv->setGeometry(QRect(33, 189, 71, 21));
        label_4 = new QLabel(SettingsDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(151, 90, 41, 21));
        wCanvas = new QLineEdit(SettingsDialog);
        wCanvas->setObjectName(QString::fromUtf8("wCanvas"));
        wCanvas->setGeometry(QRect(200, 60, 50, 20));
        hCanvas = new QLineEdit(SettingsDialog);
        hCanvas->setObjectName(QString::fromUtf8("hCanvas"));
        hCanvas->setGeometry(QRect(200, 90, 50, 20));
        label_5 = new QLabel(SettingsDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setEnabled(false);
        label_5->setGeometry(QRect(20, 20, 111, 101));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setContextMenuPolicy(Qt::NoContextMenu);
        label_5->setAutoFillBackground(false);
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/images/settings.png);"));
        label_5->setLineWidth(0);
        label_6 = new QLabel(SettingsDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(140, 20, 91, 30));
        label_7 = new QLabel(SettingsDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(32, 127, 40, 30));
        label = new QLabel(SettingsDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(92, 160, 90, 18));
        label_3 = new QLabel(SettingsDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(true);
        label_3->setGeometry(QRect(92, 190, 90, 18));
        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(140, 230, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(SettingsDialog);

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Canvas settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        SettingsDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        wArc->setText(QApplication::translate("SettingsDialog", "\320\222\320\267\320\262\320\265\321\210\320\265\320\275\320\275\321\213\320\271 \320\263\321\200\320\260\321\204", 0, QApplication::UnicodeUTF8));
        nodeColor->setText(QApplication::translate("SettingsDialog", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        BgColor->setText(QApplication::translate("SettingsDialog", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        Vertexes->setText(QApplication::translate("SettingsDialog", "\320\222\320\265\321\200\321\210\320\270\320\275:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SettingsDialog", "\320\250\320\270\321\200\320\270\320\275\320\260:", 0, QApplication::UnicodeUTF8));
        Canv->setText(QApplication::translate("SettingsDialog", "\320\237\320\276\320\273\320\276\321\202\320\275\320\260:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SettingsDialog", "\320\222\321\213\321\201\320\276\321\202\320\260:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("SettingsDialog", "\320\240\320\260\320\267\320\274\320\265\321\200 \320\277\320\276\320\273\320\276\321\202\320\275\320\260:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SettingsDialog", "\320\246\320\262\320\265\321\202:", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
