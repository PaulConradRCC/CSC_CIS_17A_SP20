#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int TIME_WIDTH = 5;
const int TABLE_PADDING = 3;
const int TEMP_FIELD = 4;
const int DIGITS = 1;

int main() {

    string time_string[12] = {  "0:00", "1:00", "2:00", "3:00",
                                "4:00", "5:00", "6:00", "7:00",
                                "8:00", "9:00", "10:00", "11:00" };
    float hourly_temp[12] = { 5.55, 7.87, 9.09, 7.7, 6.6, 10.0, 13.2,
                                14.3, 21.1, 19.2, 7.1, 4.4 };
    
    for(int i=0;i < 12; i++)
    {
        cout << setw(TIME_WIDTH) << time_string[i];
        cout << setw(TABLE_PADDING) << " ";
        cout << fixed << setprecision(DIGITS);
        cout << setw(TEMP_FIELD) << hourly_temp[i] << "°C" << endl;
    }
    
    cout << "         11111111112" << endl;
    cout << "12345678901234567890" << endl;
    
    return 0;
}

