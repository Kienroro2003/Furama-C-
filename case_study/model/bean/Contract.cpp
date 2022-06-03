#include "Contract.h"

Contract::Contract() {}

Contract::Contract(const string &idContract,
                   const Booking &booking,
                   int prePayment,
                   int totalPayment,
                   const Customer &customer)
                   :
                   idContract(idContract),
                   booking(booking),
                   prePayment(prePayment),
                   totalPayment(totalPayment),
                   customer(customer) {}

const string &Contract::getIdContract() const {
    return idContract;
}

void Contract::setIdContract(const string &idContract) {
    Contract::idContract = idContract;
}

const Booking &Contract::getBooking() const {
    return booking;
}

void Contract::setBooking(const Booking &booking) {
    Contract::booking = booking;
}

int Contract::getPrePayment() const {
    return prePayment;
}

void Contract::setPrePayment(int prePayment) {
    Contract::prePayment = prePayment;
}

int Contract::getTotalPayment() const {
    return totalPayment;
}

void Contract::setTotalPayment(int totalPayment) {
    Contract::totalPayment = totalPayment;
}

const Customer &Contract::getCustomer() const {
    return customer;
}

void Contract::setCustomer(const Customer &customer) {
    Contract::customer = customer;
}

void Contract::output() {
    cout << setw(15) << getIdContract()
    << setw(15) << getBooking().getIdBooking()
    << setw(15) << getPrePayment()
    << setw(15) << getTotalPayment()
    << setw(15) << getCustomer().getIdCode()
    << endl;
}
