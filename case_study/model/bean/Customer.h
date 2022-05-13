//
// Created by Kienroro on 07/05/2022.
//

#ifndef CASE_STUDY_CUSTOMER_H
#define CASE_STUDY_CUSTOMER_H


#include "Person.h"

class Customer: public Person{
private:
    string typeCustomer;
    string address;
public:
    Customer();

    Customer(const string &idCode, const string &fullName, const string &dateOfBirth, const string &sex,
             const string &id, const string &phoneNumber, const string &emailAddress, const string &typeCustomer,
             const string &address);

    void output() override;
};


#endif //CASE_STUDY_CUSTOMER_H
