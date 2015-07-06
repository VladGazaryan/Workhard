#ifndef RESIZE_MYLISTH_H
#define RESIZE_MYLISTH_H

#include <QObject>

class resize_mylisth : public QObject
{
    Q_OBJECT
public:
    explicit resize_mylisth(QObject *parent = 0);

signals:

public slots:
    void resizeCatch(int i);
};

#endif // RESIZE_MYLISTH_H
