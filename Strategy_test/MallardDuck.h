#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include "Duck.h"

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
};

#endif // MALLARDDUCK_H
