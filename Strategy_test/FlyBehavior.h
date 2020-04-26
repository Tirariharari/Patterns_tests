#ifndef FLYBEHAVIOR_H
#define FLYBEHAVIOR_H

class FlyBehavior
{
public:
    virtual void fly() = 0;
};

class FlyWithWings : public FlyBehavior
{
    void fly() override {
        std::cout << "I'm flying with wings!" << std::endl;
    }
};

class FlyNoWay : public FlyBehavior
{
    void fly() override {
        std::cout << "I can't fly" << std::endl;
    }
};

#endif // FLYBEHAVIOR_H
