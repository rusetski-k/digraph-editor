#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>
#include "ui_settingsdialog.h"
class Canvas;

class SettingsDialog : public QDialog, private Ui::SettingsDialog {
    Q_OBJECT
public:
    SettingsDialog(Canvas *canvas, QWidget *parent);
    ~SettingsDialog();
    void Show();

protected:
    void changeEvent(QEvent *e);
    Canvas *canvas;

private:
    void chooseColor(QLabel *label, QColor *color);
    void updateColorLabel(QLabel *label, const QColor &color);

    QColor C_Color;
    QColor N_Color;

private slots:
    void on_buttonBox_rejected();
    void on_buttonBox_accepted();
    void on_nodeColor_clicked();
    void on_BgColor_clicked();
};

#endif // SETTINGSDIALOG_H
