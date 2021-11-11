#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>
#include "ui_settingsdialog.h"

namespace Ui {
class SettingsDialog;
}

class SettingsDialog : public QDialog
{
    Q_OBJECT

public:
    Ui::SettingsDialog *ui;
    explicit SettingsDialog(QWidget *parent = nullptr);
    ~SettingsDialog();

private:

};

#endif // SETTINGSDIALOG_H
