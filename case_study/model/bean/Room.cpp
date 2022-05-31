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



void Room::output() const {
    cout << setw(8)<< getIdFacility()
    << setw(10)<< getNameService()
    << setw(15)<< getAreaUser()
    << setw(15)<< getRentalPrice()
    << setw(15)<< getRentalPeopleMax()
    << setw(20)<< getStyleRental()
    << setw(60)<< getFreeService();
}

Room::Room(const string &idFacility, const string &nameService, double areaUser, int rentalPrice, int rentalPeopleMax,
           const string &styleRental, const string &freeService) : Facility(idFacility, nameService, areaUser,
                                                                            rentalPrice, rentalPeopleMax, styleRental),
                                                                   freeService(freeService) {}
