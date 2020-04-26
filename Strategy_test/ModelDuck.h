#ifndef MODELDUCK_H
#define MODELDUCK_H

#include "Duck.h"

class ModelDuck : public Duck
{
public:
    ModelDuck(){
        flyBehavior = new FlyNoWay();
        quackBehavior = new Quack();
    }
    void display(){
        std::cout << "I'm a model duck" << std::endl;
    }
    void swim() {
        Duck::swim();
    }
};

#endif // MODELDUCK_H
