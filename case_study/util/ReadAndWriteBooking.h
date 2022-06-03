#include "../header.h"
#include "../model/bean/Booking.h"

#ifndef CASE_STUDY_READANDWRITEBOOKING_H
#define CASE_STUDY_READANDWRITEBOOKING_H


class ReadAndWriteBooking {
public:
    void writeBooking(string path, set<Booking> setBooking);

    void writeBooking(string path, queue<Booking> queueBooking);

    set<Booking> readBooking(string path);

};


#endif //CASE_STUDY_READANDWRITEBOOKING_H
