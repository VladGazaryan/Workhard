#include "test_mylist.h"
#include "mylist.h"

Test_MyList::Test_MyList(QObject *parent) : QObject(parent)
{
}

void Test_MyList::addLast()
{
       MyList l;
       l.addLast(1);
       QCOMPARE(l.getItem(0), 1);
       l.addLast(2);
       QCOMPARE(l.getItem(1), 2);
}

