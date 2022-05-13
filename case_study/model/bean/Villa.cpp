//
// Created by Kienroro on 07/05/2022.
//

#include "Villa.h"

Villa::Villa() {}

Villa::Villa(const string &idFacility, double areaUser, int rentalPrice, int rentalPeopleMax,
             const string &styleRental, const string &standardVilla, double areaPool, int floor) : Facility(idFacility,
                                                                                                            NAME,
                                                                                                            areaUser,
                                                                                                            rentalPrice,
                                                                                                            rentalPeopleMax,
                                                                                                            styleRental),
                                                                                                   standardVilla(
                                                                                                           standardVilla),
                                                                                                   areaPool(areaPool),
                                                                                                   floor(floor) {
    setNameService(NAME);
}

void Villa::setStandardVilla(const string &standardVilla) {
    Villa::standardVilla = standardVilla;
}

void Villa::setAreaPool(double areaPool) {
    Villa::areaPool = areaPool;
}

void Villa::setFloor(int floor) {
    Villa::floor = floor;
}

void Villa::output() {
    Facility::output();
    cout << "Villa{ idFacility: " << getIdFacility()
    << ", nameService: " << getNameService()
    << ", areaUser: " << getAreaUser()
    << ", rentalPeopleMax: " << getRentalPeopleMax()
    << ", styleRental: " << getStyleRental()
    << ", standardVilla: " << getStandardVilla()
    << ", areaPool: " << getAreaPool()
    << ", floor: " << getFloor()
    << "}"
    << endl;
}

const string &Villa::getStandardVilla() const {
    return standardVilla;
}

double Villa::getAreaPool() const {
    return areaPool;
}

int Villa::getFloor() const {
    return floor;
}
