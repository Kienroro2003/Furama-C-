//
// Created by Kienroro on 07/05/2022.
//

#include "Room.h"

Room::Room() {}

Room::Room(const string &idFacility, double areaUser, int rentalPrice, int rentalPeopleMax,
           const string &styleRental, const string &freeService) : Facility(idFacility, NAME, areaUser,
                                                                            rentalPrice, rentalPeopleMax, styleRental),
                                                                   freeService(freeService) {
    setNameService(NAME);
}

const string &Room::getFreeService() const {
    return freeService;
}

void Room::setFreeService(const string &freeService) {
    Room::freeService = freeService;
}



void Room::output() {
    Facility::output();
    cout << "Room{idFacility: " << getIdFacility()
    << ", nameService: " << getNameService()
    << ", areaUser: " << getAreaUser()
    << ", rentalPrice: " << getRentalPrice()
    << ", rentalPeopleMax: " << getRentalPeopleMax()
    << ", styleRental: " << getStyleRental()
    << ", freeService: " << getFreeService()
    <<"}"
    << endl;
}
