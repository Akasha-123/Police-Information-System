#include <iostream>
#include "CriminalsArray.h"
using namespace std;

int main() {
    CriminalsArray db;
    int choice;

    while (true) {
        cout << "\n***** POLICE INFORMATION SYSTEM *****\n";
        cout << "1. Insert Record\n";
        cout << "2. Search by Name\n";
        cout << "3. Search by Crime\n";
        cout << "4. Update Record\n";
        cout << "5. Delete Record\n";
        cout << "6. Show Murderers\n";
        cout << "7. Show Thieves\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 0) break;

        string name, crime;

        switch (choice) {
        case 1: {
            Criminal c;

            cout << "Enter name: ";
            cin >> c.name;

            cout << "Enter age: ";
            cin >> c.age;

            cout << "Enter crime type: ";
            cin >> c.crime_type;

            cout << "Enter offence: ";
            cin >> c.offence;

            db.insert(c);
            break;
        }

        case 2:
            cout << "Enter name: ";
            cin >> name;
            db.searchByName(name);
            break;

        case 3:
            cout << "Enter crime: ";
            cin >> crime;
            db.searchByCrime(crime);
            break;

        case 4:
            cout << "Enter name: ";
            cin >> name;
            db.update(name);
            break;

        case 5:
            cout << "Enter name: ";
            cin >> name;
            db.deleteRecord(name);
            break;

        case 6:
            db.showMurderers();
            break;

        case 7:
            db.showThieves();
            break;

        default:
            cout << "Invalid choice\n";
        }
    }

    return 0;
}