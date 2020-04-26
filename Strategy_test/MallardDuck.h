#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include "Duck.h"
#include "FlyBehavior.h"
#include "QuackBehavior.h"

class MallardDuck : public Duck
{
public:
    MallardDuck(){
        quackBehavior = new Quack();
        flyBehavior = new FlyWithWings();
    }

    void display() {
        std::cout << "I'm a real Mallard duck" << std::endl;
    }
    void performFly() {
        Duck::performFly();
    }
    void performQuack() {
        Duck::performQuack();
    }
    void swim() {
        Duck::swim();
    }
};

#endif // MALLARDDUCK_H
