#ifndef INTRFACES_H
#define INTRFACES_H

class Observer
{
public:
    virtual void update(int data) = 0;
};

class DisplayElement
{
    virtual void display() = 0;
};

class Subject
{
public:
    virtual void registerObserver(Observer* o) = 0;
    virtual void removeObserver(Observer* o) = 0;
    virtual void notifyObservers() = 0;
};

#endif // INTRFACES_H
