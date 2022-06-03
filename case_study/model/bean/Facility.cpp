

#include "Facility.h"

Facility::Facility() {}

Facility::Facility(const string &idFacility, const string &nameService, double areaUser, int rentalPrice,
                   int rentalPeopleMax, const string &styleRental) : idFacility(idFacility), nameService(nameService),
                                                                     areaUser(areaUser), rentalPrice(rentalPrice),
                                                                     rentalPeopleMax(rentalPeopleMax),
                                                                     styleRental(styleRental) {}

const string &Facility::getIdFacility() const {
    return idFacility;
}

void Facility::setIdFacility(const string &idFacility) {
    Facility::idFacility = idFacility;
}

const string &Facility::getNameService() const {
    return nameService;
}

void Facility::setNameService(const string &nameService) {
    Facility::nameService = nameService;
}

double Facility::getAreaUser() const {
    return areaUser;
}

void Facility::setAreaUser(double areaUser) {
    Facility::areaUser = areaUser;
}

int Facility::getRentalPrice() const {
    return rentalPrice;
}

void Facility::setRentalPrice(int rentalPrice) {
    Facility::rentalPrice = rentalPrice;
}

int Facility::getRentalPeopleMax() const {
    return rentalPeopleMax;
}

void Facility::setRentalPeopleMax(int rentalPeopleMax) {
    Facility::rentalPeopleMax = rentalPeopleMax;
}

const string &Facility::getStyleRental() const {
    return styleRental;
}

void Facility::setStyleRental(const string &styleRental) {
    Facility::styleRental = styleRental;
}

bool Facility::operator<(const Facility &rhs) const {
    return idFacility < rhs.idFacility;
}





