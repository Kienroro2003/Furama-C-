//
// Created by Kienroro on 07/05/2022.
//

#ifndef CASE_STUDY_ROOM_H
#define CASE_STUDY_ROOM_H


#include "Facility.h"

class Room: public Facility{
private:
    string freeService;
    const string NAME = "Room";
public:
    Room();

    Room(const string &idFacility, double areaUser, int rentalPrice, int rentalPeopleMax,
         const string &styleRental, const string &freeService);

    Room(const string &idFacility, const string &nameService, double areaUser, int rentalPrice, int rentalPeopleMax,
         const string &styleRental, const string &freeService);

    const string &getFreeService() const;

    void setFreeService(const string &freeService);


    void output() const override;

};


#endif //CASE_STUDY_ROOM_H
