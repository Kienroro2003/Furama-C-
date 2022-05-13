//
// Created by Kienroro on 07/05/2022.
//

#include "Booking.h"

Booking::Booking() {}

Booking::Booking(const string &idBooking, const string &startDate, const string &endDate, const Customer &customer,
                 const Facility &facility) : idBooking(idBooking), startDate(startDate), endDate(endDate),
                                             customer(customer), facility(facility) {}

const string &Booking::getIdBooking() const {
    return idBooking;
}

void Booking::setIdBooking(const string &idBooking) {
    Booking::idBooking = idBooking;
}

const string &Booking::getStartDate() const {
    return startDate;
}

void Booking::setStartDate(const string &startDate) {
    Booking::startDate = startDate;
}

const string &Booking::getEndDate() const {
    return endDate;
}

void Booking::setEndDate(const string &endDate) {
    Booking::endDate = endDate;
}

const Customer &Booking::getCustomer() const {
    return customer;
}

void Booking::setCustomer(const Customer &customer) {
    Booking::customer = customer;
}

const Facility &Booking::getFacility() const {
    return facility;
}

void Booking::setFacility(const Facility &facility) {
    Booking::facility = facility;
}

void Booking::output() {
    cout << "Booking{idBooking: " << idBooking
    << ", startDate: " << startDate
    << ", endDate: " << endDate
    << "idCustomer: " << customer.getIdCode()
    << "nameService: " << facility.getNameService()
    << "idService: " << facility.getIdFacility()
    << "}"
    << endl;

}
