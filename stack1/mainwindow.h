#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QImage wpawn,bpawn,wrook,brook,wbishop,bbishop,whorse,bhorse,wqueen,bqueen,wking,bking;
    int board[8][8]={{1,1,1,1,1,1,1,1},
                     {1,1,1,1,1,1,1,1},
                     {0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0},
                     {1,1,1,1,1,1,1,1},
                     {1,1,1,1,1,1,1,1}};
    int iswhite1=0,iswhite2=0;
    int count=0;
    int xa,xb,ya,yb;
    QImage f,s;
public:
    explicit MainWindow(QWidget *parent = nullptr);
    int dst(int,int,int,int);
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
