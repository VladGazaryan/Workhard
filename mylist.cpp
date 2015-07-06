#include "mylist.h"

MyList::MyList(QObject *parent) : QObject(parent)
{
    first = nullptr;
}

MyList::~MyList()
{
    while(first){
        ListNode *t = first;
        first = first -> next;
        delete t;
    }
}

void MyList::addLast(MyListData newData)
{
    ListNode *t = new ListNode;
    t->data = newData;
    t->next = nullptr;
    if(first){
        ListNode *last = first;
        while(last->next)
            last = last->next;
        last->next = t;
    } else {
        first = t;
    }
}

MyListData MyList::getItem(int index)
{
    if(index<0)
        throw "index is out of bounds";
    if (!first)
        throw "empty list";

    ListNode *node = first;
    while(node && index){
        node = node->next;
        index--;
    }
    if (index == 0)
        return node->data;
    else
        throw "index is out of bounds";
}


MyListData MyList::removeLast(){
    if (first)
        if (first->next==NULL) {
            MyListData x = first->data;
            delete first;
            first=NULL;
            return x;
        } else {
            ListNode* node = first;
            while (node->next->next) node=node->next;
            MyListData x =node->next->data;
            delete node->next;
            node->next=NULL;
            return x;
        }
    return 0;
}


int MyList::count() {
    int n=0;
    ListNode* node = first;
    while (node) {
        ++n;
        node = node->next;
    }
    return n;
}

<<<<<<< HEAD
//salam
=======
>>>>>>> dc0264e3e2d867280fb58309525b92062e1050f4
