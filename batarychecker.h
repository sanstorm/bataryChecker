#ifndef BATARYCHECKER_H
#define BATARYCHECKER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class bataryChecker; }
QT_END_NAMESPACE

class bataryChecker : public QMainWindow
{
    Q_OBJECT

public:
    bataryChecker(QWidget *parent = nullptr);
    ~bataryChecker();

private slots:
    void on_actionAbo_ut_triggered();

private:
    Ui::bataryChecker *ui;
};
#endif // BATARYCHECKER_H
