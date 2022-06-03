

#ifndef CASE_STUDY_HOUSE_H
#define CASE_STUDY_HOUSE_H


#include "Facility.h"

class House: public Facility {
private:
    string standardHose;
    int floor;
    const string NAME = "House";

public:
    House();

    House(const string &idFacility, double areaUser, int rentalPrice, int rentalPeopleMax,
          const string &styleRental, const string &standardHose, int floor);

    House(const string &idFacility, const string &nameService, double areaUser, int rentalPrice, int rentalPeopleMax,
          const string &styleRental, const string &standardHose, int floor);

    const string &getStandardHose() const;

    void setStandardHose(const string &standardHose);

    int getFloor() const;

    void setFloor(int floor);

    void output()const override;
};


#endif //CASE_STUDY_HOUSE_H
