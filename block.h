#ifndef BLOCK_H
#define BLOCK_H
#include <QLineEdit>
#include <QRegExp>
#include <QValidator>
#include <QtGui>
#include <QPoint>
#include <QTextBrowser>
#include <QMouseEvent>
#include <QEvent>

class Block :public QWidget
{
    Q_OBJECT

public:
    Block(QWidget *parent=0);
    void changeColor(const QColor &color);
    int data();
    QPoint getPos();
    void setPos(const QPoint &p);
    void setPos(int x,int y);
    void setValue(int a);
    void setEna(bool ok);
    void clearBlock();
private slots:
    void dataChange(const QString & data);

private:
    //QLineEdit *blockNum;
    QTextBrowser *blockNum;
    int da;
    QPoint p;
    //void mousePressEvent(QMouseEvent*);
    bool eventFilter(QObject *watched, QEvent *event);
};

#endif // BLOCK_H
