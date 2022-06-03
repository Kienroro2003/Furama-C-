#include "ReadAndWriteFacility.h"

void ReadAndWriteFacility::writeRoom(string path, map<Room, int> mapRoom) {
    ofstream fileOut(path, ios_base::in);
    if (fileOut.is_open()) {
        for (auto &r: mapRoom) {
            Room room = r.first;
            fileOut << room.getIdFacility() << ","
                    << room.getNameService() << ","
                    << room.getAreaUser() << ","
                    << room.getRentalPrice() << ","
                    << room.getRentalPeopleMax() << ","
                    << room.getStyleRental() << ","
                    << room.getFreeService() << ","
                    << r.second << endl;
        }
        fileOut.close();
    } else {
        cout << "File not found" << endl;
    }

}

map<Room, int> ReadAndWriteFacility::readRoom(string path) {
    ifstream fileIn(path, ios_base::in);
    map<Room, int> mapRoom;
    if (fileIn.is_open()) {
        while (1) {
            string id;
            getline(fileIn, id, ',');
            string name;
            getline(fileIn, name, ',');
            double area;
            fileIn >> area;
            fileIn.ignore();
            int price;
            fileIn >> price;
            fileIn.ignore();
            int people;
            fileIn >> people;
            fileIn.ignore();
            string style;
            getline(fileIn, style, ',');
            string freeService;
            getline(fileIn, freeService, ',');
            int count;
            fileIn >> count;
            fileIn.ignore();
            if (fileIn.eof())break;
            Room room(id, area, price, people, style, freeService);
            mapRoom[room] = count;
        }
        fileIn.close();
    } else {
        cout << "File not found" << endl;
    }
    return mapRoom;
}

void ReadAndWriteFacility::writeHouse(string path, map<House, int> mapHouse) {
    ofstream fileOut(path, ios_base::in);
    if (fileOut.is_open()) {
        for (auto &m: mapHouse) {
            House house = m.first;
            fileOut << house.getIdFacility() << ","
                    << house.getNameService() << ","
                    << house.getAreaUser() << ","
                    << house.getRentalPrice() << ","
                    << house.getRentalPeopleMax() << ","
                    << house.getStyleRental() << ","
                    << house.getStandardHose() << ","
                    << house.getFloor() << ","
                    << m.second
                    << endl;

        }
        fileOut.close();
    } else {
        cout << "File not found" << endl;
    }
}

map<House, int> ReadAndWriteFacility::readHouse(string path) {
    ifstream fileIn(path, ios_base::in);
    map<House, int> mapHouse;
    if (fileIn.is_open()) {
        while (1) {
            string id;
            getline(fileIn, id, ',');
            string name;
            getline(fileIn, name, ',');
            double area;
            fileIn >> area;
            fileIn.ignore();
            int price;
            fileIn >> price;
            fileIn.ignore();
            int people;
            fileIn >> people;
            fileIn.ignore();
            string style;
            getline(fileIn, style, ',');
            string stander;
            getline(fileIn, stander, ',');
            int floor;
            fileIn >> floor;
            fileIn.ignore();
            int count;
            fileIn >> count;
            fileIn.ignore();
            if (fileIn.eof())break;
            House house(id, area, price, people, style, stander, floor);
            mapHouse[house] = count;
        }
        fileIn.close();
    } else {
        cout << "File not found" << endl;
    }
    return mapHouse;
}

void ReadAndWriteFacility::writeVilla(string path, map<Villa, int> mapVilla) {
    ofstream fileOut(path, ios_base::out);
    if (fileOut.is_open()) {
        for (auto &m: mapVilla) {
            Villa villa = m.first;
            fileOut << villa.getIdFacility() << ","
                    << villa.getNameService() << ","
                    << villa.getAreaUser() << ","
                    << villa.getRentalPrice() << ","
                    << villa.getRentalPeopleMax() << ","
                    << villa.getStyleRental() << ","
                    << villa.getStandardVilla() << ","
                    << villa.getAreaPool() << ","
                    << villa.getFloor() << ","
                    << m.second
                    << endl;
        }
        fileOut.close();
    } else {
        cout << "File not found" << endl;
    }
}

map<Villa, int> ReadAndWriteFacility::readVilla(string path) {
    ifstream fileIn(path, ios_base::in);
    map<Villa, int> mapVilla;
    if (fileIn.is_open()) {
        while (1) {
            string id;
            getline(fileIn, id, ',');
            string name;
            getline(fileIn, name, ',');
            double area;
            fileIn >> area;
            fileIn.ignore();
            int price;
            fileIn >> price;
            fileIn.ignore();
            int people;
            fileIn >> people;
            fileIn.ignore();
            string style;
            getline(fileIn, style, ',');
            string standard;
            getline(fileIn, standard, ',');
            double areaPool;
            fileIn >> areaPool;
            fileIn.ignore();
            int floor;
            fileIn >> floor;
            fileIn.ignore();
            int count;
            fileIn >> count;
            fileIn.ignore();
            if (fileIn.eof())break;
            Villa villa(id, area, price, people, style, standard, areaPool, floor);
            mapVilla[villa] = count;
        }
        fileIn.close();
    } else {
        cout << "File not found" << endl;
    }
    return mapVilla;
}
