#include <iostream>
#include "Duck.h"
#include "MallardDuck.h"

int main()
{
    Duck *mallard = new MallardDuck();
    mallard->performQuack();
    mallard->performFly();
    mallard->display();
    mallard->swim();

    return 0;
}
