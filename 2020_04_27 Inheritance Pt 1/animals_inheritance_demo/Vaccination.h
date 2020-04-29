#ifndef VACCINATION_H
#define VACCINATION_H

#include <string>
using namespace std;

class Vaccination {
public:
    Vaccination();
    virtual ~Vaccination();
    
    // get/set
    string getVaccinationName() const;
    bool setVaccinationName(string vaccinationName);
    
    bool getVaccinationStatus() const;
    void setVaccinationStatus(bool vaccinationStatus);
    
private:
    string vaccination;
    bool hasVaccination;
};

#endif /* VACCINATION_H */

