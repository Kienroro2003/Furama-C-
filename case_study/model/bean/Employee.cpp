//
// Created by Kienroro on 07/05/2022.
//

#include "Employee.h"

Employee::Employee() {}

Employee::Employee(const string &idCode, const string &fullName, const string &dateOfBirth, const string &sex,
                   const string &id, const string &phoneNumber, const string &emailAddress, const string &level,
                   const string &position, double salary) : Person(idCode, fullName, dateOfBirth, sex, id, phoneNumber,
                                                                  emailAddress), level(level), position(position),
                                                           salary(salary) {}

void Employee::output() {
//    cout << "Customer{idCode: " << idCode
//         << ", fullName: " << fullName
//         << ", dateOfBirth: " << dateOfBirth
//         << ", sex: " << sex
//         << ", id: " << id
//         << ", phoneNumber: " << phoneNumber
//         << ", emailAddress: " << emailAddress
//         << ", level: " << level
//         << ", position: " << position
//         << ", salary: " << salary
//         << "}"
//         << endl;
    cout << setw(20) << idCode
         << setw(20) << fullName
         << setw(20) << dateOfBirth
         << setw(20) << sex
         << setw(20) << id
         << setw(20) << phoneNumber
         << setw(20) << emailAddress
         << setw(20) << level
         << setw(20) << position
         << setw(20) << salary
         << endl;

}

const string &Employee::getLevel() const {
    return level;
}

void Employee::setLevel(const string &level) {
    Employee::level = level;
}

const string &Employee::getPosition() const {
    return position;
}

void Employee::setPosition(const string &position) {
    Employee::position = position;
}

double Employee::getSalary() const {
    return salary;
}

void Employee::setSalary(double salary) {
    Employee::salary = salary;
}

Employee::Employee(const string &idCode, const string &fullName, const string &dateOfBirth, const string &sex,
                   const string &id, const string &phoneNumber, const string &emailAddress, const string &level,
                   const string &position) : Person(idCode, fullName, dateOfBirth, sex, id, phoneNumber, emailAddress),
                                             level(level), position(position) {}
