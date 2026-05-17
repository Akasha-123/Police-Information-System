#ifndef CRIMINALSARRAY_H
#define CRIMINALSARRAY_H

#include "Criminal.h"

class CriminalsArray {
public:
    Criminal arr[100];
    int size;

    CriminalsArray();

    void insert(Criminal c);
    void searchByName(string name);
    void searchByCrime(string crime);
    void update(string name);
    void deleteRecord(string name);
    void showMurderers();
    void showThieves();

private:
    int findIndex(string name);
    string toLower(string s);
};

#endif