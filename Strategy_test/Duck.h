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
    void performFly();
    void performQuack();
    virtual void swim();
    void setFlyBehavior(FlyBehavior *fb);
    void setQuackBehavior(QuackBehavior *cb);

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

 void Duck::setFlyBehavior(FlyBehavior *fb)
 {
     delete flyBehavior;
     flyBehavior = fb;
 }

  void Duck::setQuackBehavior(QuackBehavior *cb)
 {
     delete quackBehavior;
     quackBehavior = cb;
 }

#endif // DUCK_H
