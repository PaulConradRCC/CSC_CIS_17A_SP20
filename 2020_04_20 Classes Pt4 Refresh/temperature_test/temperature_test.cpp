
#include <iostream>
#include "temperature.h"
using namespace std;

int main(int argc, char** argv) {

    temperature reading = temperature();
    int option=0;
    
    do {
        cout << "Temperature Tester" << endl << endl;
        cout << "1. Display temperature reading" << endl;
        cout << "2. Set Temperature Reading (test setTemperatureReading)" << endl;
        cout << "3. Get Temperature Reading (test getTemperatureReading)" << endl;
        cout << "4. Set Unit (test setUnit)" << endl;
        cout << "5. Get Unit (test getUnit)" << endl;
        cout << "0. Quit Program" << endl << endl;
        cout << "Enter choice (1-5, 0): ";
        cin >> option;
        
        switch(option)
        {
            case 1: // display our current temperature reading
                cout << "reading = "  << reading << endl;
                break;
            
            case 2: // test set temperature
                cout << "Enter new temperature reading: ";
                float input;
                cin >> input;
                
                if ( reading.setTemperatureReading(input) ) cout << "reading is updated!" << endl;
                else cout << "reading was not updated, invalid value!" << endl;
                break;
                
            case 3: // test get temperature
                cout << "temperature_reading = "  << reading.getTemperatureReading() << endl;
                break;
                
            case 4: // test set unit
                cout << "Enter new temperature unit (0=Kelvin, 1=Celsius, 2=Fahrenheit): ";
                int unit_input;
                cin >> unit_input;
                
                if ( reading.setUnit(unit_input) ) cout << "unit is updated!" << endl;
                else cout << "unit was not updated, invalid value!" << endl;
                break;
                
            case 5: // test get unit
                cout << "temperature unit = "  << reading.getUnit() << endl;
                break;
            
            case 0:
                return 0;
                
            default:
                cout << "Incorrect choice, try again!" << endl;
                
        }
        
    } while (option != 0);
}

