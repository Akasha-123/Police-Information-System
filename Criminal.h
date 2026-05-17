#ifndef CRIMINAL_H
#define CRIMINAL_H

#include <string>
#include "Date.h"
using namespace std;

class Criminal {
public:
    string name, age, race, gender, cnic;
    string state, city, postal_code, address;
    string cell_no;
    string crime_type, offence;
    string punishment_in_years;
    string complainer_name, investigating_officer;

    Date dob, crime_date, punishment_date;

    Criminal();

    Criminal(string name, string age, string race, string gender,
        string cnic, string state, string city, string postal_code,
        string address, string cell_no, string crime_type,
        string offence, string punishment_in_years,
        string complainer_name, string investigating_officer,
        Date dob, Date crime_date, Date punishment_date);
};

#endif