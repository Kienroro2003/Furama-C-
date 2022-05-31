//
// Created by Kienroro on 07/05/2022.
//

#include "Person.h"

Person::Person() {}

Person::Person(const string &idCode, const string &fullName, const Date &dateOfBirth, const string &sex,
               const string &id, const string &phoneNumber, const string &emailAddress) : idCode(idCode),
                                                                                          fullName(fullName),
                                                                                          dateOfBirth(dateOfBirth),
                                                                                          sex(sex), id(id),
                                                                                          phoneNumber(phoneNumber),
                                                                                          emailAddress(emailAddress) {}

const string &Person::getIdCode() const {
    return idCode;
}

void Person::setIdCode(const string &idCode) {
    Person::idCode = idCode;
}

const string &Person::getFullName() const {
    return fullName;
}

void Person::setFullName(const string &fullName) {
    Person::fullName = fullName;
}

const string &Person::getSex() const {
    return sex;
}

void Person::setSex(const string &sex) {
    Person::sex = sex;
}

const string &Person::getId() const {
    return id;
}

void Person::setId(const string &id) {
    Person::id = id;
}

const string &Person::getPhoneNumber() const {
    return phoneNumber;
}

void Person::setPhoneNumber(const string &phoneNumber) {
    Person::phoneNumber = phoneNumber;
}

const string &Person::getEmailAddress() const {
    return emailAddress;
}

void Person::setEmailAddress(const string &emailAddress) {
    Person::emailAddress = emailAddress;
}

const Date &Person::getDateOfBirth() const {
    return dateOfBirth;
}

void Person::setDateOfBirth(const Date &dateOfBirth) {
    Person::dateOfBirth = dateOfBirth;
}
