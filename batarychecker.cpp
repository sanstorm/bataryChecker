#include "batarychecker.h"
#include "ui_batarychecker.h"
#include <QMessageBox>

bataryChecker::bataryChecker(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::bataryChecker)
{
    ui->setupUi(this);
    settingsDialog =new SettingsDialog(this);
    ui->pushButton->setDisabled(true);
    ui->plainTextEdit->setReadOnly(true);
}

bataryChecker::~bataryChecker()
{
    delete ui;
}


void bataryChecker::on_actionAbo_ut_triggered()
{
    QMessageBox::about(this, tr("About BataryChecker"), tr(
            "Copyright (c) 2021, Maxim Kozorez aka <b>Sanstorm </b>.<br>"
            "The program and the accompanying materials are licensed and made available under the terms and conditions of the BSD License.<br>"
            "The full text of the license may be found at <a href=http://opensource.org/licenses/bsd-license.php>OpenSource.org</a>.<br><br>"
            "<b>THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN \"AS IS\" BASIS, "
            "WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, "
            "EITHER EXPRESS OR IMPLIED.</b>"));
}


void bataryChecker::on_actionE_xit_triggered()
{
    QCoreApplication::exit(0);
}


void bataryChecker::on_pushButton_clicked()
{

    this->ui->plainTextEdit->insertPlainText(QString::number(sbs.readManufacturerName()));
}


void bataryChecker::on_actionSettings_triggered()
{
    if(settingsDialog->exec()){
        sbs.setAdapter();
        ui->statusbar->showMessage(QString::number(sbs.adapter = settingsDialog->ui->comboBox->currentIndex()));
        ui->pushButton->setDisabled(false);
    }
}
