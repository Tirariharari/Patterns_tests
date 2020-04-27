#include <iostream>
#include "WeatherData.h"
#include "CurrentCondition.h"
#include "HeatIndexDisplay.h"

using namespace std;

int main()
{
    WeatherData weatherData;
    CurrentConditionDisplay currentDisplay (&weatherData);
    HeatIndexDiaplay heatDisplay (&weatherData);

    weatherData.setMeasurements(5);
    weatherData.setMeasurements(9);
    weatherData.setMeasurements(11);
    return 0;
}
