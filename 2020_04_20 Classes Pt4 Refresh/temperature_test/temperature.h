#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <iostream>
using namespace std;

class temperature {
public:
    temperature();
    temperature(const temperature& orig);
    virtual ~temperature();
    
    // get/set for temperature_reading
    float getTemperatureReading() const;
    bool setTemperatureReading(float newValue);
    
    // get/set for unit
    int getUnit() const;
    bool setUnit(int newValue);
    
    friend ostream& operator<<(ostream& o, const temperature& temp_reading);
    
private:
    float temperature_reading;
    int unit;   // 0=Kelvin, 1=Fahrenheit, 2=Celsius
    
    void converter(int old_unit, int new_unit);
};

#endif /* TEMPERATURE_H */

