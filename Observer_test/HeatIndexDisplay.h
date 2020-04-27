#ifndef HEATINDEXDISPLAY_H
#define HEATINDEXDISPLAY_H

#include "Interfaces.h"

class HeatIndexDiaplay : public Observer, DisplayElement
{
private:
    int data;
    Subject* weatherData;
public:
    HeatIndexDiaplay(Subject *weatherD){
        weatherData = weatherD;
        weatherData->registerObserver(this);
    }
    void update (int d){
        data = d*100;
        display();
    }
    void display(){
        std::cout << "Current HeatIndex data : " << data << std::endl;
    }
};

#endif // HEATINDEXDISPLAY_H
