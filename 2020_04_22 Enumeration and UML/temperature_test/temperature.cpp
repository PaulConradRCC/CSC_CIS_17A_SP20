
#include "temperature.h"

temperature::temperature() {
    temperature_reading = 0;
    unit = KELVIN;
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
    if ( unit == KELVIN ) // Kelvin
    {
        if ( newValue >= MIN_KELVIN )
        {
            temperature_reading = newValue;
            success = true;
        }
    }
    else if ( unit == CELSIUS ) // Celsius
    {
        if ( newValue >= MIN_CELSIUS )
        {
            temperature_reading = newValue;
            success = true;
        }
    }
    else // Fahrenheit
    {
        if ( newValue >= MIN_FAHRENHEIT ) // Fahrenheit
        {
            temperature_reading = newValue;
            success = true;
        }
    }
    
    return success;
}
    
// get/set for unit
Temp_Units temperature::getUnit() const
{
    return unit;
}

bool temperature::setUnit(Temp_Units newValue)
{
    bool success = false;
    if ( newValue >= KELVIN && newValue <= FAHRENHEIT )
    {
        converter(unit, newValue);
        unit = newValue;
        success = true;
    }
    
    return success;
}

void temperature::converter(Temp_Units old_unit, Temp_Units new_unit)
{
    if ( old_unit == KELVIN ) // from kelvin
    {
        if ( new_unit == CELSIUS ) // to celsius
            temperature_reading = temperature_reading + MIN_CELSIUS;
        else if ( new_unit == FAHRENHEIT ) // fahrenheit
        {
            temperature_reading = temperature_reading + MIN_CELSIUS;
            temperature_reading = 1.8 * temperature_reading + 32;
        }
    }
    
    if ( old_unit == CELSIUS ) // from celsius
    {
        if ( new_unit == KELVIN ) // to kelvin
            temperature_reading = temperature_reading - MIN_CELSIUS;
        else if ( new_unit == FAHRENHEIT ) // fahrenheit
        {
            temperature_reading = 1.8 * temperature_reading + 32;
        }
    }
    
    if ( old_unit == FAHRENHEIT ) // from fahrenheit
    {
        if ( new_unit == KELVIN ) // to kelvin
        {
            temperature_reading = (temperature_reading - 32) / 1.8;
            temperature_reading = temperature_reading - MIN_CELSIUS;
        }
        else if ( new_unit == CELSIUS ) // celsius
        {
            temperature_reading = (temperature_reading - 32) / 1.8;
        }
    }
}

ostream& operator<<(ostream& o, const temperature& temp_reading)
{
    o << temp_reading.temperature_reading << " degrees ";
    o << UnitName[temp_reading.unit];
    
    return o;
}
