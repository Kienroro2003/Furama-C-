//
// Created by Kienroro on 07/05/2022.
//

#include "House.h"

House::House() {}

House::House(const string &idFacility, double areaUser, int rentalPrice, int rentalPeopleMax,
             const string &styleRental, const string &standardHose, int floor) : Facility(idFacility,NAME,
                                                                                          areaUser, rentalPrice,
                                                                                          rentalPeopleMax, styleRental),
                                                                                 standardHose(standardHose),
                                                                                 floor(floor) {
    setNameService(NAME);
}

const string &House::getStandardHose() const {
    return standardHose;
}

void House::setStandardHose(const string &standardHose) {
    House::standardHose = standardHose;
}

int House::getFloor() const {
    return floor;
}

void House::setFloor(int floor) {
    House::floor = floor;
}

void House::output()const {
    cout << setw(8)<< getIdFacility()
    << setw(10)<< getNameService()
    << setw(15)<< getAreaUser()
    << setw(15)<< getRentalPrice()
    << setw(15)<< getRentalPeopleMax()
    << setw(20)<< getStyleRental()
    << setw(20)<< getStandardHose()
    << setw(10)<< getFloor();
}

House::House(const string &idFacility, const string &nameService, double areaUser, int rentalPrice, int rentalPeopleMax,
             const string &styleRental, const string &standardHose, int floor) : Facility(idFacility, nameService,
                                                                                          areaUser, rentalPrice,
                                                                                          rentalPeopleMax, styleRental),
                                                                                 standardHose(standardHose),
                                                                                 floor(floor) {}
