//
// Created by Kienroro on 07/05/2022.
//

#include "Customer.h"

Customer::Customer() {}

Customer::Customer(const string &idCode, const string &fullName, const string &dateOfBirth, const string &sex,
                   const string &id, const string &phoneNumber, const string &emailAddress, const string &typeCustomer,
                   const string &address) : Person(idCode, fullName, dateOfBirth, sex, id, phoneNumber, emailAddress),
                                            typeCustomer(typeCustomer), address(address) {

}

void Customer::output() {
    cout << "Customer{idCode: " << idCode
    <<", fullName: " << fullName
    <<", dateOfBirth: " << dateOfBirth
    <<", sex: " << sex
    <<", id: " <<id
    <<", phoneNumber: " << phoneNumber
    <<", emailAddress: " << emailAddress
    <<", typeCustomer: " <<typeCustomer
    <<", address: " <<address
    <<"}"
    << endl;

}
