//
// Created by Kienroro on 07/05/2022.
//

#ifndef CASE_STUDY_BOOKING_H
#define CASE_STUDY_BOOKING_H


#include "Customer.h"
#include "Facility.h"

class Booking {
private:
    string idBooking;
    string startDate;
    string endDate;
    Customer customer;
    Facility facility;
public:
    Booking();

    Booking(const string &idBooking, const string &startDate, const string &endDate, const Customer &customer,
            const Facility &facility);

    const string &getIdBooking() const;

    void setIdBooking(const string &idBooking);

    const string &getStartDate() const;

    void setStartDate(const string &startDate);

    const string &getEndDate() const;

    void setEndDate(const string &endDate);

    const Customer &getCustomer() const;

    void setCustomer(const Customer &customer);

    const Facility &getFacility() const;

    void setFacility(const Facility &facility);

    void output();



};


#endif //CASE_STUDY_BOOKING_H
