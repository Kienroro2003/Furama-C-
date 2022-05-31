//
// Created by Kienroro on 14/05/2022.
//

#include "FacilityManagement.h"
#include "../service/FacilityService.h"

void addNewFacility() {
    while (1) {
        cout << "1. Add New Villa" << endl;
        cout << "2. Add New Room" << endl;
        cout << "3. Add New House" << endl;
        cout << "4. Back to menu" << endl;
        cout << "Enter choose: ";
        int choose;
        cin >> choose;
        cin.ignore();
        switch (choose) {
            case 1: {
                FacilityService().addVilla();
                break;
            }
            case 2: {
                FacilityService().addRoom();
                break;
            }
            case 3: {
                FacilityService().addHouse();
                break;
            }
            case 4: {
                return;
            }
        }
    }
}

void FacilityManagement::facilityMenu() {
    while (1) {
        cout << "1. Display list facility" << endl;
        cout << "2. Add new facility" << endl;
        cout << "3. Display list facility maintenance" << endl;
        cout << "4. Return main menu" << endl;
        cout << "Enter choose: ";
        int choose;
        cin >> choose;
        cin.ignore();
        switch (choose) {
            case 1: {
                FacilityService().display();
                break;
            }
            case 2: {
                addNewFacility();
                break;
            }
            case 3: {
                FacilityService().displayMaintenance();
                break;
            }
            case 4: {
                return;
            }
        }
    }
}
