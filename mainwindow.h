#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int opcion;
    Q_SLOT void setEditText(const QString & str) {
        setPB01(10);
      }

private slots:

    void on_slHilo01_actionTriggered(int action);

    void on_slHilo01_valueChanged(int value);

    void on_slHilo02_valueChanged(int value);

    void on_slHilo03_valueChanged(int value);

    void on_slHilo04_valueChanged(int value);

    void on_btnRandom_clicked();

    void on_btnStart_clicked();

    void setPB01(int value);


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
