#include "Booking.h"

Booking::Booking() {}

const string &Booking::getIdBooking() const {
    return idBooking;
}

void Booking::setIdBooking(const string &idBooking) {
    Booking::idBooking = idBooking;
}


const Customer &Booking::getCustomer() const {
    return customer;
}

void Booking::setCustomer(const Customer &customer) {
    Booking::customer = customer;
}


void Booking::output() const {
    cout << setw(17) << idBooking
         << setw(16) << startDate.display()
         << setw(16) << endDate.display()
         << setw(17) << customer.getIdCode()
         << setw(11) << facility->getNameService()
         << setw(17) << facility->getIdFacility()
         << endl;
}

Facility *Booking::getFacility() const {
    return facility;
}

void Booking::setFacility(Facility *facility) {
    Booking::facility = facility;
}

bool Booking::operator<(const Booking &rhs) const {
    return idBooking < rhs.idBooking;
}

Booking::Booking(const string &idBooking,
                 const Date &startDate,
                 const Date &endDate,
                 const Customer &customer,
                 Facility *facility)
                 :
                 idBooking(idBooking),
                 startDate(startDate),
                 endDate(endDate),
                 customer(customer),
                 facility(facility) {}

const Date &Booking::getStartDate() const {
    return startDate;
}

void Booking::setStartDate(const Date &startDate) {
    Booking::startDate = startDate;
}

const Date &Booking::getEndDate() const {
    return endDate;
}

void Booking::setEndDate(const Date &endDate) {
    Booking::endDate = endDate;
}

