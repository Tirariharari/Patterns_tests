#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "Interfaces.h"
#include <list>

class WeatherData : public Subject
{
private:
    std::list<Observer*> observers;
    int data;
public:
    WetherData() {}
    void registerObserver(Observer* o);
    void removeObserver(Observer* o);
    void notifyObservers();
    void measurementsChanged();
    void setMeasurements (int data);
};

#endif // WEATHERDATA_H
