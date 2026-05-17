#include "CriminalsArray.h"
#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

CriminalsArray::CriminalsArray() {
    size = 0;
}

void CriminalsArray::insert(Criminal c) {
    if (size < 100) {
        arr[size++] = c;
        cout << "Record inserted successfully\n";
    }
    else {
        cout << "Array full\n";
    }
}

int CriminalsArray::findIndex(string name) {
    for (int i = 0; i < size; i++) {
        if (arr[i].name == name)
            return i;
    }
    return -1;
}

string CriminalsArray::toLower(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

void CriminalsArray::searchByName(string name) {
    bool found = false;

    for (int i = 0; i < size; i++) {
        if (arr[i].name == name) {
            found = true;
            cout << "\nName: " << arr[i].name << endl;
            cout << "Age: " << arr[i].age << endl;
            cout << "Crime: " << arr[i].crime_type << endl;
        }
    }

    if (!found)
        cout << "No record found\n";
}

void CriminalsArray::searchByCrime(string crime) {
    bool found = false;

    for (int i = 0; i < size; i++) {
        if (arr[i].crime_type == crime) {
            found = true;
            cout << arr[i].name << " - " << arr[i].crime_type << endl;
        }
    }

    if (!found)
        cout << "No records found\n";
}

void CriminalsArray::update(string name) {
    int index = findIndex(name);

    if (index == -1) {
        cout << "Not found\n";
        return;
    }

    cout << "Enter new crime type: ";
    cin >> arr[index].crime_type;

    cout << "Updated successfully\n";
}

void CriminalsArray::deleteRecord(string name) {
    int index = findIndex(name);

    if (index == -1) {
        cout << "Not found\n";
        return;
    }

    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;

    cout << "Deleted successfully\n";
}

void CriminalsArray::showMurderers()
{
    cout << "\n--- Murderers ---\n";
    bool found = false;

    for (int i = 0; i < size; i++)
    {
        if (toLower(arr[i].crime_type) == "murder")
        {
            found = true;
            cout << "Name: " << arr[i].name << endl;
        }
    }

    if (!found)
        cout << "No murder records found\n";
}

void CriminalsArray::showThieves()
{
    cout << "\n--- Thieves ---\n";
    bool found = false;

    for (int i = 0; i < size; i++)
    {
        if (toLower(arr[i].crime_type) == "theft")
        {
            found = true;
            cout << "Name: " << arr[i].name << endl;
        }
    }

    if (!found)
        cout << "No theft records found\n";
}