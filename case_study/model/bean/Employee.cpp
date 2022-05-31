//
// Created by Kienroro on 07/05/2022.
//

#include "Employee.h"

Employee::Employee() {}

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
    cout << setw(7 ) << idCode
         << setw(40) << fullName
         << setw(10) << dateOfBirth.display()
         << setw(10) << sex
         << setw(15) << id
         << setw(15) << phoneNumber
         << setw(50) << emailAddress
         << setw(10) << level
         << setw(20) << position
         << setw(15) << salary
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

Employee::Employee(const string &idCode, const string &fullName, const Date &dateOfBirth, const string &sex,
                   const string &id, const string &phoneNumber, const string &emailAddress, const string &level,
                   const string &position, double salary) : Person(idCode, fullName, dateOfBirth, sex, id, phoneNumber,
                                                                   emailAddress), level(level), position(position),
                                                            salary(salary) {}


