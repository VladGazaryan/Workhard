//
//
//

#include <QCoreApplication>
#include "test_mylist.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTest::qExec(new Test_MyList, argc, argv);
    return a.exec();
}
