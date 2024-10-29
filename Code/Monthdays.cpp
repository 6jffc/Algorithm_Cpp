#include <iostream>
using namespace std;

const int JANUARY   = 1;
const int FEBRUARY  = 2;
const int MARCH     = 3;
const int APRIL     = 4;
const int MAY       = 5;
const int JUNE      = 6;
const int JULY      = 7;
const int AUGUST    = 8;
const int SEPTEMBER = 9;
const int OCTOBER   = 10;
const int NOVEMBER  = 11;
const int DECEMBER  = 12;

bool IsLeapYear(int year) {
    // Leap year is divisible by 4
    // Except if divisible by 100, unless also divisible by 400
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int MonthDays(int month, int year) {
    switch (month) {
        case SEPTEMBER:
        case APRIL:
        case JUNE:
        case NOVEMBER:
            return 30;
        case FEBRUARY:
            return (IsLeapYear(year)) ? 29 : 28;
        default:
            return 31;
    }
}

int main() {
    int month, year;
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    int days = MonthDays(month, year);
    cout << "Number of days in month " << month << " of year " << year << " is " << days << endl;

    return 0;
}

