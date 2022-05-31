//
// Created by Kienroro on 07/05/2022.
//
#include "../../header.h"

#ifndef CASE_STUDY_FACILITY_H
#define CASE_STUDY_FACILITY_H



class Facility {
    /**
     * private String idFacility;
    private String nameService;
    private double areaUse;
    private int rentalPrice;
    private int rentalPeopleMax;
    private String styleRental;
     */
protected:
    string idFacility;
    string nameService;
    double areaUser;
    int rentalPrice;
    int rentalPeopleMax;
    string styleRental;
public:
    Facility();

    Facility(const string &idFacility, const string &nameService, double areaUser, int rentalPrice, int rentalPeopleMax,
             const string &styleRental);

    const string &getIdFacility() const;

    void setIdFacility(const string &idFacility);

    const string &getNameService() const;

    void setNameService(const string &nameService);

    double getAreaUser() const;

    void setAreaUser(double areaUser);

    int getRentalPrice() const;

    void setRentalPrice(int rentalPrice);

    int getRentalPeopleMax() const;

    void setRentalPeopleMax(int rentalPeopleMax);

    const string &getStyleRental() const;

    void setStyleRental(const string &styleRental);

    virtual void output() const =0;

    bool operator<(const Facility &rhs) const;
};


#endif //CASE_STUDY_FACILITY_H
