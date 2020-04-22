#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <iostream>
#include <string>
using namespace std;

enum Temp_Units { KELVIN, CELSIUS, FAHRENHEIT };

const string UnitName[] = { "Kelvin", "Celsius", "Fahrenheit" };

const float MIN_KELVIN = 0.0f;
const float MIN_CELSIUS = -273.13f;
const float MIN_FAHRENHEIT = -459.634f;

class temperature {
public:
    temperature();
    temperature(const temperature& orig);
    virtual ~temperature();
    
    // get/set for temperature_reading
    float getTemperatureReading() const;
    bool setTemperatureReading(float newValue);
    
    // get/set for unit
    Temp_Units getUnit() const;
    bool setUnit(Temp_Units newValue);
    
    friend ostream& operator<<(ostream& o, const temperature& temp_reading);
    
private:
    float temperature_reading;
    Temp_Units unit;   // Kelvin, Celsius, Fahrenheit
    
    void converter(Temp_Units old_unit, Temp_Units new_unit);
};

#endif /* TEMPERATURE_H */

