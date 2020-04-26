#include <iostream>
#include "Duck.h"
#include "MallardDuck.h"
#include "ModelDuck.h"

int main()
{
    Duck *mallard = new MallardDuck();
    mallard->performQuack();
    mallard->performFly();
    mallard->display();
    mallard->swim();

    std::cout << "----------" << std::endl;

    Duck *model = new ModelDuck();
    model->performFly();
    model->setFlyBehavior(new FlyRocketPowered);
    model->performFly();

    return 0;
}
