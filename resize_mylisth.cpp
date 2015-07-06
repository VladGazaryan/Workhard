#include "resize_mylisth.h"
#include <iostream>
using namespace std;
resize_mylisth::resize_mylisth(QObject *parent) : QObject(parent)
{

}

void resize_mylisth::resizeCatch(int i){
    cout<<"after resize "<<i<<endl;
}
