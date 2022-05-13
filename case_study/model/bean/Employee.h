//
// Created by Kienroro on 07/05/2022.
//
#include "../../header.h"
#include "Person.h"

#ifndef CASE_STUDY_EMPLOYEE_H
#define CASE_STUDY_EMPLOYEE_H


class Employee: public Person{
private:
    string level;
    string position;
    double salary;
public:
    Employee();

    Employee(const string &idCode, const string &fullName, const string &dateOfBirth, const string &sex,
             const string &id, const string &phoneNumber, const string &emailAddress, const string &level,
             const string &position, double salary);

    Employee(const string &idCode, const string &fullName, const string &dateOfBirth, const string &sex,
             const string &id, const string &phoneNumber, const string &emailAddress, const string &level,
             const string &position);

    const string &getLevel() const;

    void setLevel(const string &level);

    const string &getPosition() const;

    void setPosition(const string &position);

    double getSalary() const;

    void setSalary(double salary);

    void output() override;

};


#endif //CASE_STUDY_EMPLOYEE_H
