#include "WeatherData.h"
#include <list>

void WeatherData::registerObserver(Observer* o)
{
    observers.push_back(o);
}

void WeatherData::removeObserver(Observer* o)
{
    std::list<Observer*>::iterator it = observers.begin();
    for (;it != observers.end(); it++)
    {
        if (*it == o)
        {
            observers.erase(it);
            break;
        }
    }
}

void WeatherData::notifyObservers()
{
    std::list<Observer*>::iterator it = observers.begin();
    for (;it != observers.end(); it++)
        (*it)->update(data);
}

void WeatherData::measurementsChanged()
{
    notifyObservers();
}

void WeatherData::setMeasurements (int d)
{
    data = d;
    measurementsChanged();
}
