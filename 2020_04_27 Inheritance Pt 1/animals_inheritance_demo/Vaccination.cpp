#include "Vaccination.h"

Vaccination::Vaccination() {
    vaccination="";
    hasVaccination = false;
}

Vaccination::~Vaccination() {
}

string Vaccination::getVaccinationName() const
{
    return vaccination;
}

bool Vaccination::setVaccinationName(string vaccinationName)
{
    bool success = false;
    
    if ( vaccinationName.length() <= 30 )
    {
        vaccination = vaccinationName;
        success = true;
    }
    return success;
}
    
bool Vaccination::getVaccinationStatus() const
{
    return hasVaccination;
}

void Vaccination::setVaccinationStatus(bool vaccinationStatus)
{
    hasVaccination = vaccinationStatus;
}

