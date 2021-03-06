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
#include <QTextBrowser>
#include <QString>
#include <QDebug>

class Block :public QWidget
{
    Q_OBJECT

public:
    bool marked;
    Block(QWidget *parent=0);
    void ChangeColor(QString qstr);
    int num()const;
    //QPoint getPos();
    //void setPos(const QPoint &p);
    void SetPos(int x,int y);
    //void setValue(int a);
    void AddValue(int);
    void SetEna(bool ok);
    void clearBlock();
    void RemoveTail();
    void SetContent(QString);
    QString Content()const;
    bool Enable()const;
    void SetFontType(int sz);
    int FontPolicy();
private slots:
    //void dataChange(const QString & data);
    void Highlight(int, int, int, char);
signals:
    void Chosen(int, int);

private:
    QTextBrowser *blockNum;
    QFont font;
    QString curColor;
    int number;
    QPoint p;
    bool enaFlag;
    QString content;
    void mousePressEvent(QMouseEvent*);
};

#endif // BLOCK_H
