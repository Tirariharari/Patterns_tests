#ifndef QUACKBEHAVIOR_H
#define QUACKBEHAVIOR_H

class QuackBehavior
{
public:
    virtual void quack() = 0;
};

class Quack : public QuackBehavior
{
public:
    void quack() override {
        std::cout << "Quack" << std::endl;
    }
};

class MuteQuack : public QuackBehavior
{
public:
    void quack() override {
        std::cout << "Silence" << std::endl;
    }
};

class Squeak : public QuackBehavior
{
public:
    void quack() override {
        std::cout << "Squeak" << std::endl;
    }
};

#endif // QUACKBEHAVIOR_H
