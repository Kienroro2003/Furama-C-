#include "Customer.h"

Customer::Customer() {}

Customer::Customer(const string &idCode,
                   const string &fullName,
                   const Date &dateOfBirth,
                   const string &sex,
                   const string &id,
                   const string &phoneNumber,
                   const string &emailAddress,
                   const string &typeCustomer,
                   const string &address) : Person(idCode, fullName, dateOfBirth, sex, id, phoneNumber, emailAddress),
                                            typeCustomer(typeCustomer), address(address) {

}

void Customer::output() {
    cout <<setw(7) << idCode
    <<setw(40) << fullName
    <<setw(10) << dateOfBirth.display()
    <<setw(10) << sex
    <<setw(15) <<id
    <<setw(15) << phoneNumber
    <<setw(50) << emailAddress
    <<setw(10) <<typeCustomer
    <<setw(20) <<address
    << endl;

}

const string &Customer::getTypeCustomer() const {
    return typeCustomer;
}

void Customer::setTypeCustomer(const string &typeCustomer) {
    Customer::typeCustomer = typeCustomer;
}

const string &Customer::getAddress() const {
    return address;
}

void Customer::setAddress(const string &address) {
    Customer::address = address;
}
