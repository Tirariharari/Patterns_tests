#ifndef DUCK_H
#define DUCK_H

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck{
protected:
    FlyBehavior *flyBehavior;
    QuackBehavior *quackBehavior;
public:
    Duck () {}
    virtual void display() = 0;
    virtual void performFly() = 0;
    virtual void performQuack() = 0;
    virtual void swim() = 0;
};

void Duck::performFly()
{
    flyBehavior->fly();
}

void Duck::performQuack()
{
    quackBehavior->quack();
}

void Duck::swim()
{
    std::cout << "All ducks float, even decoys!" << std::endl;
}

#endif // DUCK_H
