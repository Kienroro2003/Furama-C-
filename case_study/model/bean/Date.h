
#include "../../header.h"

#ifndef CASE_STUDY_DATE_H
#define CASE_STUDY_DATE_H


class Date {
private:
    int day;
    int month;
    int year;
public:

    void input();

    string display() const;

    Date();

    Date(int day, int month, int year);

    int getDay() const;

    void setDay(int day);

    int getMonth() const;

    void setMonth(int month);

    int getYear() const;

    void setYear(int year);


};


#endif //CASE_STUDY_DATE_H
