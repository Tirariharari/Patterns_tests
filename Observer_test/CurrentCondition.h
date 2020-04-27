#ifndef CURRENTCONDITION_H
#define CURRENTCONDITION_H

#include "Interfaces.h"

class CurrentConditionDisplay : public Observer, DisplayElement
{
private:
    int data;
    Subject* weatherData;
public:
    CurrentConditionDisplay(Subject *weatherD){
        weatherData = weatherD;
        weatherData->registerObserver(this);
    }
    void update (int d){
        data = d;
        display();
    }
    void display(){
        std::cout << "Current condition data : " << data << std::endl;
    }
};

#endif // CURRENTCONDITION_H
