#include "Date.h"

Date::Date() {
    date = 0;
    month = 0;
    year = 0;
}

Date::Date(int d, int m, int y) {
    date = d;
    month = m;
    year = y;
}