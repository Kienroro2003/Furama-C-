#include "../header.h"
#include "../model/bean//Booking.h"

#ifndef CASE_STUDY_BOOKINGSERVICE_H
#define CASE_STUDY_BOOKINGSERVICE_H


class BookingService {
private:
    set<Booking> setBooking;
public:
    void displayBooking();
    void addBooking();

};


#endif //CASE_STUDY_BOOKINGSERVICE_H
