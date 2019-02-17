#include "math.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

static QPushButton *c,*d;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){

    ui->setupUi(this);

    connect( ui->pushButton_1, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_2, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_3, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_4, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_5, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_6, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_7, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_8, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_9, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_10, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_11, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_12, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_13, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_14, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_15, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_16, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_17, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_18, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_19, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_20, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_21, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_22, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_23, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_24, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_25, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_26, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_27, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_28, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_29, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_30, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_31, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_32, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_33, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_34, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_35, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_36, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_37, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_38, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_39, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_40, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_41, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_42, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_43, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_44, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_45, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_46, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_47, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_48, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_49, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_50, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_51, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_52, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_53, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_54, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_55, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_56, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_57, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_58, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_59, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_60, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_61, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_62, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_63, SIGNAL(clicked()), this, SLOT(common())) ;
    connect( ui->pushButton_64, SIGNAL(clicked()), this, SLOT(common())) ;

    QPixmap bp = this->ui->pushButton_3->icon().pixmap(61,61);
    bpawn=QImage(bp.toImage());
    QPixmap wp = this->ui->pushButton_52->icon().pixmap(61,61);
    wpawn=QImage(wp.toImage());

    QPixmap br = this->ui->pushButton_1->icon().pixmap(61,61);
    brook=QImage(br.toImage());
    QPixmap wr = this->ui->pushButton_44->icon().pixmap(61,61);
    wrook=QImage(wr.toImage());

    QPixmap bh = this->ui->pushButton_32->icon().pixmap(61,61);
    bhorse=QImage(bh.toImage());
    QPixmap wh = this->ui->pushButton_50->icon().pixmap(61,61);
    whorse=QImage(wh.toImage());

    QPixmap bb = this->ui->pushButton_31->icon().pixmap(61,61);
    bbishop=QImage(bb.toImage());
    QPixmap wb = this->ui->pushButton_58->icon().pixmap(61,61);
    wbishop=QImage(wb.toImage());

    QPixmap bq = this->ui->pushButton_30->icon().pixmap(61,61);
    bqueen=QImage(bq.toImage());
    QPixmap wq = this->ui->pushButton_47->icon().pixmap(61,61);
    wqueen=QImage(wq.toImage());

    QPixmap bk = this->ui->pushButton_29->icon().pixmap(61,61);
    bking=QImage(bk.toImage());
    QPixmap wk = this->ui->pushButton_49->icon().pixmap(61,61);
    wking=QImage(wk.toImage());
    //print_array();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::common() {
    if(count==0) {
        c = qobject_cast<QPushButton *>(sender());
        xa=c->x();
        ya=c->y();
        if(c->icon().isNull())
        {}
        else
        {
        count=1;

        QPixmap pixmap2 = c->icon().pixmap(61,61);
        f=QImage(pixmap2.toImage());
        if(iswhite(f))
            iswhite1=1;
        }
    }
    else
    {
        d=qobject_cast<QPushButton *>(sender());
        xb=d->x();
        yb=d->y();
        QPixmap pixmap2 = d->icon().pixmap(61,61);
        s=QImage(pixmap2.toImage());
        int move_possible=1;

        if(f==wrook || f==brook)
            move_possible=ifrook(xa,ya,xb,yb);
        else if(f==wbishop || f==bbishop)
            move_possible=ifbishop(xa,ya,xb,yb);
        else if(f==wqueen || f==bqueen)
            move_possible=(ifrook(xa,ya,xb,yb)||ifbishop(xa,ya,xb,yb));
        else if(f==whorse || f==bhorse)
            move_possible=ifhorse(xa,ya,xb,yb);
        else if(f==bking || f==wking)
            move_possible=ifking(xa,ya,xb,yb);
        else
        {
            if(f==wpawn)
                move_possible=ifpawn(xa,ya,xb,yb,1);
            else
                move_possible=ifpawn(xa,ya,xb,yb,0);
        }
        if(iswhite(s))
            iswhite2=1;
        if(((iswhite1==0 && iswhite2==1)||(iswhite1==1 && iswhite2==0)||(d->icon().isNull()))&&move_possible&&!(c->icon().isNull())/*&&((chance==1 && iswhite1==1)||(chance==0 && iswhite1==0))*/)
        {
        QIcon a=c->icon();
        c->setIcon(QIcon());

        if((yb == 70 || yb==490) && (f==wpawn || f==bpawn))
            promote();
        else
            d->setIcon(a);
        update_arr(xa,ya,xb,yb);
        //print_array();
        }
        iswhite1=iswhite2=0;
        count=0;
    }
}

bool MainWindow::iswhite(QImage c)
{
    if(c==wrook || c==wbishop || c==wqueen || c==wking || c==wpawn|| c==whorse)
        return 1;
    return 0;
}

bool MainWindow::isblack(QImage c)
{
    if(c==brook || c==bbishop || c==bqueen || c==bking || c==bpawn|| c==bhorse)
        return 1;
    return 0;
}

bool MainWindow::ifrook(int x1,int y1,int x2,int y2)
{
    int d=dst(x1,y1,x2,y2);
    if(d%60!=0)
        return 0;
    else
    {
        if(x1==x2)
        {
            int a=(x1-60)/60;
            int b=(y1-70)/60;
            int q=(y2-70)/60;
            int d=b>q?b:q;
            int e=b<q?b:q;
            for(int i=e+1;i<d;i++)
                if(board[i][a]!=0)
                     return 0;
        }
        else
        {
            int a=(y1-70)/60;
            int b=(x1-60)/60;
            int q=(x2-60)/60;
            int d=b>q?b:q;
            int e=b<q?b:q;
            for(int i=e+1;i<d;i++)
                if(board[a][i]!=0)
                    return 0;


        }
    }
    return 1;
}

bool MainWindow::ifbishop(int x1, int y1, int x2, int y2)
{
    if(abs(x2-x1)!=abs(y2-y1))
        return 0;
    else
    {
            int a=(x1-60)/60;
            int b=(x2-60)/60;
            int q=(y1-70)/60;
            int d=(y2-70)/60;
            int e=a>b?a:b;
            int l=a<b?a:b;
            int h=q<d?q:d;
            int m=q>d?q:d;
            int i,j;
            float sl=(y2-y1)/(x2-x1);
            if(sl<0) {
                for(i=l+1,j=m-1;i<e;i++,j--)
                     if(board[j][i]==1)
                         return 0;
            } else{
                for(i=l+1,j=h+1;i<e;i++,j++)
                    if(board[j][i]==1)
                         return 0;
            }
    }
    return 1;
}

bool MainWindow::ifhorse(int x1, int y1, int x2, int y2) {
    if(floor(dst(x1,y1,x2,y2))==134) {
        return 1;
    }
    return 0;
}

bool MainWindow::ifking(int x1, int y1, int x2, int y2) {
    if(y1==490 && x1==300) {
        if((y2-y1)==120 && board[7][5]==0 && board[7][6]==0) {
            this->ui->pushButton_40->setIcon(QIcon());
            this->ui->pushButton_61->setIcon(QIcon(QPixmap::fromImage(wrook)));
            return 1;
        }
    }
    if(dst(x1,y1,x2,y2)==60 || ((abs(x1-x2)==60)&&(abs(y1-y2)==60))) {
            return 1;
    }
    return 0;
}

bool MainWindow::ifpawn(int x1, int y1, int x2, int y2, int ch) {
    int l=dst(x1,y1,x2,y2);
    if(ch==0 && y2<y1)   //black
        return 0;
    if(ch==1 && y2>y1)
        return 0;
    if(board[(y2-70)/60][(x2-60)/60]==1 && l==84)
        return 1;
    if(board[(y2-70)/60][(x2-60)/60]==1 && l==60)
        return 0;
    if((y1==130 || y1==430) && (l==60 || l==120) && (board[((y2+y1)/2-70)/60][(x2-60)/60]==0))
        return 1;
    if(l==60 && x1==x2)
        return 1;
    return 0;
}

//void MainWindow::print_array() {
//    this->ui->textEdit->setText(QString::number(board[0][0])+QString::number(board[0][1])+QString::number(board[0][2])+QString::number(board[0][3])+QString::number(board[0][4])+QString::number(board[0][5])+QString::number(board[0][6])+QString::number(board[0][7])+"\n"+
//            QString::number(board[1][0])+QString::number(board[1][1])+QString::number(board[1][2])+QString::number(board[1][3])+QString::number(board[1][4])+QString::number(board[1][5])+QString::number(board[1][6])+QString::number(board[1][7])+"\n"+
//            QString::number(board[2][0])+QString::number(board[2][1])+QString::number(board[2][2])+QString::number(board[2][3])+QString::number(board[2][4])+QString::number(board[2][5])+QString::number(board[2][6])+QString::number(board[2][7])+"\n"+
//            QString::number(board[3][0])+QString::number(board[3][1])+QString::number(board[3][2])+QString::number(board[3][3])+QString::number(board[3][4])+QString::number(board[3][5])+QString::number(board[3][6])+QString::number(board[3][7])+"\n"+
//            QString::number(board[4][0])+QString::number(board[4][1])+QString::number(board[4][2])+QString::number(board[4][3])+QString::number(board[4][4])+QString::number(board[4][5])+QString::number(board[4][6])+QString::number(board[4][7])+"\n"+
//            QString::number(board[5][0])+QString::number(board[5][1])+QString::number(board[5][2])+QString::number(board[5][3])+QString::number(board[5][4])+QString::number(board[5][5])+QString::number(board[5][6])+QString::number(board[5][7])+"\n"+
//            QString::number(board[6][0])+QString::number(board[6][1])+QString::number(board[6][2])+QString::number(board[6][3])+QString::number(board[6][4])+QString::number(board[6][5])+QString::number(board[6][6])+QString::number(board[6][7])+"\n"+
//            QString::number(board[7][0])+QString::number(board[7][1])+QString::number(board[7][2])+QString::number(board[7][3])+QString::number(board[7][4])+QString::number(board[7][5])+QString::number(board[7][6])+QString::number(board[7][7]));
//}

void MainWindow::promote() {
    QMessageBox msgBox;
    msgBox.setText(tr("Chose piece?"));
    QAbstractButton* rook = msgBox.addButton(tr("Rook"), QMessageBox::YesRole);
    QAbstractButton* bishop = msgBox.addButton(tr("Bishop"), QMessageBox::YesRole);
    QAbstractButton* horse = msgBox.addButton(tr("Horse"), QMessageBox::YesRole);
    QAbstractButton* queen = msgBox.addButton(tr("Queen"), QMessageBox::YesRole);
    msgBox.exec();

    if (msgBox.clickedButton()==rook) {
        if(f==wpawn)
            d->setIcon(QIcon(QPixmap::fromImage(wrook)));
        else
            d->setIcon(QIcon(QPixmap::fromImage(brook)));
    }

    if (msgBox.clickedButton()==bishop) {
        if(f==wpawn)
            d->setIcon(QIcon(QPixmap::fromImage(wbishop)));
        else
            d->setIcon(QIcon(QPixmap::fromImage(bbishop)));
    }

    if (msgBox.clickedButton()==horse) {
        if(f==wpawn)
            d->setIcon(QIcon(QPixmap::fromImage(whorse)));
        else
            d->setIcon(QIcon(QPixmap::fromImage(bhorse)));
    }

    if (msgBox.clickedButton()==queen) {
        if(f==wpawn)
            d->setIcon(QIcon(QPixmap::fromImage(wqueen)));
        else
            d->setIcon(QIcon(QPixmap::fromImage(bqueen)));
    }
}

void MainWindow::update_arr(int x1,int y1,int x2,int y2) {
    board[(y2-70)/60][(x2-60)/60]=1;
    board[(y1-70)/60][(x1-60)/60]=0;
}

int MainWindow::dst(int x1,int y1,int x2,int y2) {
    return int(sqrt((y2-y1)*(y2-y1)+(x2-x1)*(x2-x1)));
}
