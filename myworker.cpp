#include "myworker.h"

MyWorker::MyWorker(QObject *parent) :
    counter(0),
    QObject(parent)
{
}

void MyWorker::handleGuiClick()
{
    counter += 1;
}

int MyWorker::getCounter()
{
    return counter;
}
