//
// Created by Kienroro on 07/05/2022.
//

#ifndef CASE_STUDY_VILLA_H
#define CASE_STUDY_VILLA_H


#include "Facility.h"

class Villa: public Facility {
private:
    string standardVilla;
    double areaPool;
    int floor;
    const string NAME = "Villa";
public:
    Villa();

    Villa(const string &idFacility, double areaUser, int rentalPrice, int rentalPeopleMax,
          const string &styleRental, const string &standardVilla, double areaPool, int floor);

    void setStandardVilla(const string &standardVilla);

    void setAreaPool(double areaPool);

    void setFloor(int floor);

    const string &getStandardVilla() const;

    double getAreaPool() const;

    int getFloor() const;

    void output() override;

};


#endif //CASE_STUDY_VILLA_H
