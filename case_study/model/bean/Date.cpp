#include "Date.h"

bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return true;
    }
    return false;
}

int calculateDayOfMonth(int month, int year) {
    int nNumOfDays;

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            nNumOfDays = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            nNumOfDays = 30;
            break;
        case 2:
            if (isLeapYear(year)) {
                nNumOfDays = 29;
            } else {
                nNumOfDays = 28;
            }
            break;
    }

    return nNumOfDays;
}

bool isValidate(int day,int month, int year){
    if(year < 0)return false;
    if(month < 1 || month > 12)return false;
    if(day < 1 || day > calculateDayOfMonth(month,year))return false;
    return true;
}

Date::Date() {}

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {}

void Date::input() {
    do {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
        cin.ignore();
        if (!isValidate(day, month, year)) {
            cout << "Wrong date format."<<endl;
        }
    }while(!isValidate(day,month,year));


}

int Date::getDay() const {
    return day;
}

void Date::setDay(int day) {
    Date::day = day;
}

int Date::getMonth() const {
    return month;
}

void Date::setMonth(int month) {
    Date::month = month;
}

int Date::getYear() const {
    return year;
}

void Date::setYear(int year) {
    Date::year = year;
}

string Date::display() const {
    string date = to_string(day) + "/" + to_string(month) + "/" + to_string(year);
    return date;
}
