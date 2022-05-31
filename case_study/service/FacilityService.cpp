//
// Created by Kienroro on 14/05/2022.
//

#include "FacilityService.h"
#include "../util/ReadAndWriteFacility.h"


void FacilityService::addRoom() {
    mapRoom = ReadAndWriteFacility().readRoom("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/room");
    string idRoom = "RO-000" + to_string(mapRoom.size());
    cout << "Enter area user: ";
    double areaUser;
    cin >> areaUser;
    cin.ignore();
    cout << "Enter rental price: ";
    int rentalPrice;
    cin >> rentalPrice;
    cin.ignore();
    cout << "Enter rental people max: ";
    int rentalPeopleMax;
    cin >> rentalPeopleMax;
    cin.ignore();
    cout << "Enter style rental: ";
    string styleRental;
    getline(cin, styleRental);
    cout << "Enter free service: ";
    string freeService;
    getline(cin, freeService);
    Room room(idRoom, areaUser, rentalPrice, rentalPeopleMax, styleRental, freeService);
    mapRoom[room] = 0;
    ReadAndWriteFacility().writeRoom("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/room", mapRoom);

}

void FacilityService::addVilla() {
    mapVilla = ReadAndWriteFacility().readVilla("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/villa");
    string idVilla = "VL-000" + to_string(mapVilla.size());
    cout << "Enter area user: ";
    double areaUser;
    cin >> areaUser;
    cin.ignore();
    cout << "Enter rental price: ";
    int rentalPrice;
    cin >> rentalPrice;
    cin.ignore();
    cout << "Enter rental people max: ";
    int rentalPeopleMax;
    cin >> rentalPeopleMax;
    cin.ignore();
    cout << "Enter style rental: ";
    string styleRental;
    getline(cin, styleRental);
    cout << "Enter stander villa: ";
    string standardVilla;
    getline(cin, standardVilla);
    cout << "Enter area pool: ";
    double areaPool;
    cin >> areaPool;
    cin.ignore();
    cout << "Enter floor: ";
    int floor;
    cin >> floor;
    cin.ignore();
    Villa villa(idVilla, areaPool, rentalPrice, rentalPeopleMax, styleRental, standardVilla, areaPool, floor);
    mapVilla[villa] = 0;
    ReadAndWriteFacility().writeVilla("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/villa", mapVilla);
}

void FacilityService::addHouse() {
    mapHouse = ReadAndWriteFacility().readHouse("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/house");
    string idHouse = "HO-000" + to_string(mapHouse.size());
    cout << "Enter area user: ";
    double areaUser;
    cin >> areaUser;
    cin.ignore();
    cout << "Enter rental price: ";
    int rentalPrice;
    cin >> rentalPrice;
    cin.ignore();
    cout << "Enter rental people max: ";
    int rentalPeopleMax;
    cin >> rentalPeopleMax;
    cin.ignore();
    cout << "Enter style rental: ";
    string styleRental;
    getline(cin, styleRental);
    cout << "Enter standard hose: ";
    string standardHose;
    getline(cin, standardHose);
    cout << "Enter floor: ";
    int floor;
    cin >> floor;
    cin.ignore();
    House house(idHouse, areaUser, rentalPrice, rentalPeopleMax, styleRental, standardHose, floor);
    mapHouse[house] = 0;
    ReadAndWriteFacility().writeHouse("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/house", mapHouse);
}

void FacilityService::display() {
    mapRoom = ReadAndWriteFacility().readRoom("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/room");
    mapVilla = ReadAndWriteFacility().readVilla("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/villa");
    mapHouse = ReadAndWriteFacility().readHouse("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/house");
    for (int i = 0; i < 150; i++) {
        cout << "*";
    }
    cout << endl;
    cout << setw(5) << "ID"
         << setw(10) << "NAME"
         << setw(14) << "AREA USER"
         << setw(13) << "PRICE"
         << setw(18) << "MAX PEOPLE"
         << setw(16) << "STYLE"
         << setw(23) << "STANDARD"
         << setw(12) << "FLOOR"
         << setw(12) << "AREA POOL"
         << setw(18) << "FREE SERVICE"
         << setw(7) << "USE"
         << endl;
    for (int i = 0; i < 150; i++) {
        cout << "*";
    }
    cout << endl;
    if (!mapRoom.empty()) {
        for (auto &m: mapRoom) {
            m.first.output();
            cout << setw(7) << m.second << endl;
            cout <<
                 "--------+---------+--------------+--------------+--------------+-------------------+-------------------+---------+---------+-------------------+-----+"
                 << endl;
        }
    }
    if (!mapVilla.empty()) {
        for (auto &m: mapVilla) {
            m.first.output();
            cout << setw(27) << m.second << endl;
            cout <<
                 "--------+---------+--------------+--------------+--------------+-------------------+-------------------+---------+---------+-------------------+-----+"
                 << endl;
        }
    }
    if (!mapHouse.empty()) {
        for (auto &m: mapHouse) {
            m.first.output();
            cout << setw(37) << m.second << endl;
            cout <<
                 "--------+---------+--------------+--------------+--------------+-------------------+-------------------+---------+---------+-------------------+-----+"
                 << endl;
        }
    }

}

void FacilityService::displayMaintenance() {
    mapRoom = ReadAndWriteFacility().readRoom("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/room");
    mapVilla = ReadAndWriteFacility().readVilla("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/villa");
    mapHouse = ReadAndWriteFacility().readHouse("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/house");
    for (int i = 0; i < 150; i++) {
        cout << "*";
    }
    cout << endl;
    cout << setw(5) << "ID"
         << setw(10) << "NAME"
         << setw(14) << "AREA USER"
         << setw(13) << "PRICE"
         << setw(18) << "MAX PEOPLE"
         << setw(16) << "STYLE"
         << setw(23) << "STANDARD"
         << setw(12) << "FLOOR"
         << setw(12) << "AREA POOL"
         << setw(18) << "FREE SERVICE"
         << setw(7) << "USE"
         << endl;
    for (int i = 0; i < 150; i++) {
        cout << "*";
    }
    cout << endl;
    if (!mapRoom.empty()) {
        for (auto &m: mapRoom) {
            if (m.second >= 5) {
                m.first.output();
                cout << setw(7) << m.second << endl;
                cout <<
                     "--------+---------+--------------+--------------+--------------+-------------------+-------------------+---------+---------+-------------------+-----+"
                     << endl;
            }
        }
    }
    if (!mapVilla.empty()) {
        for (auto &m: mapVilla) {
            if (m.second >= 5) {
                m.first.output();
                cout << setw(27) << m.second << endl;
                cout <<
                     "--------+---------+--------------+--------------+--------------+-------------------+-------------------+---------+---------+-------------------+-----+"
                     << endl;
            }
        }
    }
    if (!mapHouse.empty()) {
        for (auto &m: mapHouse) {
            if (m.second >= 5) {
                m.first.output();
                cout << setw(37) << m.second << endl;
                cout <<
                     "--------+---------+--------------+--------------+--------------+-------------------+-------------------+---------+---------+-------------------+-----+"
                     << endl;
            }
        }
    }
}

