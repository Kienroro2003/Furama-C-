#include "../header.h"
#include "../model/bean/Room.h"
#include "../model/bean/Villa.h"
#include "../model/bean/House.h"
#include <map>

#ifndef CASE_STUDY_FACILITYSERVICE_H
#define CASE_STUDY_FACILITYSERVICE_H


class FacilityService {
private:
    map<Room,int> mapRoom;
    map<Villa,int> mapVilla;
    map<House,int> mapHouse;
public:

    void addRoom();

    void addVilla();

    void addHouse();

    void display();

    void displayMaintenance();


};


#endif //CASE_STUDY_FACILITYSERVICE_H
