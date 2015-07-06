//
//
//

#include <QCoreApplication>
#include "test_mylist.h"
#include "resize_mylisth.h"
#include "mylist.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTest::qExec(new Test_MyList, argc, argv);
    MyList l;
    resize_mylisth Test;
    QObject::connect (&l, SIGNAL(resize(int)),&Test, SLOT(resizeCatch(int)));
    l.addLast(3);
    l.removeLast();
    return 0;
}

