#ifndef BATARYCHECKER_H
#define BATARYCHECKER_H

#include <QMainWindow>
#include "sbscomands.h"

QT_BEGIN_NAMESPACE
namespace Ui { class bataryChecker; }
QT_END_NAMESPACE

class bataryChecker : public QMainWindow
{
    Q_OBJECT
    SBSComands sbs;

public:
    bataryChecker(QWidget *parent = nullptr);
    ~bataryChecker();

private slots:
    void on_actionAbo_ut_triggered();

    void on_actionE_xit_triggered();

    void on_pushButton_clicked();

private:
    Ui::bataryChecker *ui;
};
#endif // BATARYCHECKER_H
