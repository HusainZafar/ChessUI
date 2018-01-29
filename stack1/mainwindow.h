#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    float dst(int,int,int,int);
    ~MainWindow();
protected slots:
    void common();
    bool iswhite(QImage);
    bool isblack(QImage);
    void update_arr(int x1, int y1, int x2, int y2);
    bool ifrook(int,int,int,int);
    bool ifbishop(int x1, int y1, int x2, int y2);
    bool ifhorse(int x1, int y1, int x2, int y2);
    bool ifking(int x1, int y1, int x2, int y2);
    bool ifpawn(int x1, int y1, int x2, int y2, int c);
    //void print_array();
    void promote();
private slots:


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
