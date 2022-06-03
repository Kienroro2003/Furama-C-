#ifndef CASE_STUDY_READANDWRITEFACILITY_H
#define CASE_STUDY_READANDWRITEFACILITY_H


#include "../model/bean/Room.h"
#include "../model/bean/House.h"
#include "../model/bean/Villa.h"
#include "../header.h"

class ReadAndWriteFacility {
public:
    void writeRoom(string path, map<Room,int> mapRoom);
    map<Room,int> readRoom(string path);
    void writeHouse(string path, map<House,int> mapHouse);
    map<House,int> readHouse(string path);
    void writeVilla(string path, map<Villa,int> mapVilla);
    map<Villa,int> readVilla(string path);

};


#endif //CASE_STUDY_READANDWRITEFACILITY_H
