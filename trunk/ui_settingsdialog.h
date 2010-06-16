/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created: Wed 16. Jun 18:01:17 2010
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
    QDialogButtonBox *buttonBox;
    QCheckBox *checkBox;
    QPushButton *nodeColor;
    QPushButton *BgColor;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *wCanvas;
    QLineEdit *hCanvas;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(308, 262);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        SettingsDialog->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(120, 220, 171, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        checkBox = new QCheckBox(SettingsDialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(20, 190, 111, 31));
        nodeColor = new QPushButton(SettingsDialog);
        nodeColor->setObjectName(QString::fromUtf8("nodeColor"));
        nodeColor->setGeometry(QRect(201, 75, 70, 23));
        BgColor = new QPushButton(SettingsDialog);
        BgColor->setObjectName(QString::fromUtf8("BgColor"));
        BgColor->setGeometry(QRect(201, 105, 71, 23));
        label = new QLabel(SettingsDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(141, 75, 71, 21));
        label_2 = new QLabel(SettingsDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 160, 51, 21));
        label_3 = new QLabel(SettingsDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(141, 105, 71, 21));
        label_4 = new QLabel(SettingsDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 160, 41, 21));
        wCanvas = new QLineEdit(SettingsDialog);
        wCanvas->setObjectName(QString::fromUtf8("wCanvas"));
        wCanvas->setGeometry(QRect(70, 160, 40, 20));
        hCanvas = new QLineEdit(SettingsDialog);
        hCanvas->setObjectName(QString::fromUtf8("hCanvas"));
        hCanvas->setGeometry(QRect(189, 160, 40, 20));
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
        label_6->setGeometry(QRect(20, 130, 91, 30));
        label_7 = new QLabel(SettingsDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(140, 45, 40, 30));

        retranslateUi(SettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Canvas settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        SettingsDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        checkBox->setText(QApplication::translate("SettingsDialog", "\320\222\320\267\320\262\320\265\321\210\320\265\320\275\320\275\321\213\320\271 \320\263\321\200\320\260\321\204", 0, QApplication::UnicodeUTF8));
        nodeColor->setText(QApplication::translate("SettingsDialog", "PushButton", 0, QApplication::UnicodeUTF8));
        BgColor->setText(QApplication::translate("SettingsDialog", "PushButton", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SettingsDialog", "\320\222\320\265\321\200\321\210\320\270\320\275:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SettingsDialog", "\320\250\320\270\321\200\320\270\320\275\320\260:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SettingsDialog", "\320\237\320\276\320\273\320\276\321\202\320\275\320\260:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SettingsDialog", "\320\224\320\273\320\270\320\275\320\275\320\260:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("SettingsDialog", "\320\240\320\260\320\267\320\274\320\265\321\200 \320\277\320\276\320\273\320\276\321\202\320\275\320\260:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SettingsDialog", "\320\246\320\262\320\265\321\202:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
