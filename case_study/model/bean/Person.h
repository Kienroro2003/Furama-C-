//
// Created by Kienroro on 07/05/2022.
//
#include "../../header.h"
#include "Date.h"

#ifndef CASE_STUDY_PERSON_H
#define CASE_STUDY_PERSON_H


class Person {
protected:
    string idCode;
    string fullName;
    Date dateOfBirth;
    string sex;
    string id;
    string phoneNumber;
    string emailAddress;
public:
    Person();

    Person(const string &idCode, const string &fullName, const Date &dateOfBirth, const string &sex, const string &id,
           const string &phoneNumber, const string &emailAddress);

    const string &getIdCode() const;

    void setIdCode(const string &idCode);

    const string &getFullName() const;

    void setFullName(const string &fullName);

    const Date &getDateOfBirth() const;

    void setDateOfBirth(const Date &dateOfBirth);

    const string &getSex() const;

    void setSex(const string &sex);

    const string &getId() const;

    void setId(const string &id);

    const string &getPhoneNumber() const;

    void setPhoneNumber(const string &phoneNumber);

    const string &getEmailAddress() const;

    void setEmailAddress(const string &emailAddress);

    virtual void output() = 0 ;
};


#endif //CASE_STUDY_PERSON_H
