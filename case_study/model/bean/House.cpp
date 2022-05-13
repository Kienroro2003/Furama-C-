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

void House::output() {
    cout << "House{idFacility: " << getIdFacility()
    << ", nameService: " << getNameService()
    << ", areaUser: " << getAreaUser()
    << ", rentalPrice: " << getRentalPrice()
    << ", rentalPeopleMax: " << getRentalPeopleMax()
    << ", styleRental: " << getStyleRental()
    << ", standardHose: " << getStandardHose()
    << ", floor: " << getFloor()
    << "}"
    << endl;

}
