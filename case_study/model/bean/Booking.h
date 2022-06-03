#ifndef CASE_STUDY_BOOKING_H
#define CASE_STUDY_BOOKING_H


#include "Customer.h"
#include "Facility.h"

class Booking {
private:
    string idBooking;
    Date startDate;
    Date endDate;
    Customer customer;
    Facility* facility;
public:
    Booking();

    Booking(const string &idBooking,
            const Date &startDate,
            const Date &endDate,
            const Customer &customer,
            Facility *facility);

    void output() const;

    const string &getIdBooking() const;

    void setIdBooking(const string &idBooking);

    const Date &getStartDate() const;

    void setStartDate(const Date &startDate);

    const Date &getEndDate() const;

    void setEndDate(const Date &endDate);

    const Customer &getCustomer() const;

    void setCustomer(const Customer &customer);

    Facility *getFacility() const;

    void setFacility(Facility *facility);

    bool operator<(const Booking &rhs) const;
};


#endif //CASE_STUDY_BOOKING_H
