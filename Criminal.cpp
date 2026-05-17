#include "Criminal.h"

Criminal::Criminal() {}

Criminal::Criminal(string name, string age, string race, string gender,
    string cnic, string state, string city, string postal_code,
    string address, string cell_no, string crime_type,
    string offence, string punishment_in_years,
    string complainer_name, string investigating_officer,
    Date dob, Date crime_date, Date punishment_date)
{
    this->name = name;
    this->age = age;
    this->race = race;
    this->gender = gender;
    this->cnic = cnic;
    this->state = state;
    this->city = city;
    this->postal_code = postal_code;
    this->address = address;
    this->cell_no = cell_no;
    this->crime_type = crime_type;
    this->offence = offence;
    this->punishment_in_years = punishment_in_years;
    this->complainer_name = complainer_name;
    this->investigating_officer = investigating_officer;
    this->dob = dob;
    this->crime_date = crime_date;
    this->punishment_date = punishment_date;
}