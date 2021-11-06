#include "batarychecker.h"
#include "ui_batarychecker.h"

bataryChecker::bataryChecker(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::bataryChecker)
{
    ui->setupUi(this);
}

bataryChecker::~bataryChecker()
{
    delete ui;
}

