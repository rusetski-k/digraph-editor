#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>

namespace Ui {
    class SettingsDialog;
}

class SettingsDialog : public QDialog {
    Q_OBJECT
public:
    SettingsDialog(QWidget *parent = 0);
    ~SettingsDialog();
    void Show();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::SettingsDialog *ui;
};

#endif // SETTINGSDIALOG_H
