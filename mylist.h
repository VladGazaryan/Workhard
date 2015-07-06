#ifndef MYLIST_H
#define MYLIST_H

#include <QObject>

typedef int MyListData;

struct ListNode
{
    MyListData data;
    ListNode *next;
};

class MyList : public QObject
{
    Q_OBJECT
protected:
    ListNode *first;
public:
    explicit MyList(QObject *parent = 0);

    ~MyList();

    void addLast(MyListData newData);
    MyListData removeLast();
    MyListData getItem(int index);

    int count();

};

#endif // MYLIST_H
