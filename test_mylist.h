//
// Unit-тест класса MyList
//

#ifndef TEST_MYLIST_H
#define TEST_MYLIST_H

#include <QObject>
#include <QTest>

class Test_MyList : public QObject
{
    Q_OBJECT
public:
    explicit Test_MyList(QObject *parent = 0);

private slots:
    void addLast();
};

#endif // TEST_MYLIST_H
