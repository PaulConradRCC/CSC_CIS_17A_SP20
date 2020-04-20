
#include "temperature.h"

temperature::temperature() {
    temperature_reading = 0;
    unit = 0;
}

temperature::temperature(const temperature& orig) {
    temperature_reading = orig.temperature_reading;
    unit = orig.unit;
}

temperature::~temperature() {
    // nothing needs to be done here as this example class does not
    // allocate any memory with the new keyword.
}

// get/set for temperature_reading
float temperature::getTemperatureReading() const
{
    return temperature_reading;
}

bool temperature::setTemperatureReading(float newValue)
{
    bool success = false;
    if ( unit == 0 ) // Kelvin
    {
        if ( newValue >= 0 )
        {
            temperature_reading = newValue;
            success = true;
        }
    }
    else if ( unit == 1 ) // Celsius
    {
        if ( newValue >= -273.13 )
        {
            temperature_reading = newValue;
            success = true;
        }
    }
    else 
    {
        if ( newValue >= -459.634 )
        {
            temperature_reading = newValue;
            success = true;
        }
    }
    
    return success;
}
    
// get/set for unit
int temperature::getUnit() const
{
    return unit;
}

bool temperature::setUnit(int newValue)
{
    bool success = false;
    if ( newValue >=0 && newValue <=2 )
    {
        converter(unit, newValue);
        unit = newValue;
        success = true;
    }
    
    return success;
}

void temperature::converter(int old_unit, int new_unit)
{
    if ( old_unit == 0 ) // from kelvin
    {
        if ( new_unit == 1 ) // to celsius
            temperature_reading = temperature_reading - 273.13;
        else if ( new_unit == 2 ) // fahrenheit
        {
            temperature_reading = temperature_reading - 273.13;
            temperature_reading = 1.8 * temperature_reading + 32;
        }
    }
    
    if ( old_unit == 1 ) // from celsius
    {
        if ( new_unit == 0 ) // to kelvin
            temperature_reading = temperature_reading + 273.13;
        else if ( new_unit == 2 ) // fahrenheit
        {
            temperature_reading = 1.8 * temperature_reading + 32;
        }
    }
    
    if ( old_unit == 2 ) // from fahrenheit
    {
        if ( new_unit == 0 ) // to kelvin
        {
            temperature_reading = (temperature_reading - 32) / 1.8;
            temperature_reading = temperature_reading + 273.13;
        }
        else if ( new_unit == 1 ) // celsius
        {
            temperature_reading = (temperature_reading - 32) / 1.8;
        }
    }
}

ostream& operator<<(ostream& o, const temperature& temp_reading)
{
    o << temp_reading.temperature_reading << " degrees ";
    if ( temp_reading.unit == 0 ) o << "Kelvin";
    else if ( temp_reading.unit == 1) o << "Celsius";
    else o << "Fahrenheit";
    
    return o;
}

