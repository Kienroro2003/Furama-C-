#include "FuramaController.h"
#include "FacilityManagement.h"
#include "BookingManagement.h"

void FuramaController::displayMainMenu() {
    bool check = true;
    while(check){
        cout << "*****************FURAMA MENU*****************" << endl;
        cout << "1. Employee Management " << endl;
        cout << "2. Customer Management " << endl;
        cout << "3. Facility Management " << endl;
        cout << "4. Booking Management  " << endl;
        cout << "5. Promotion Management " << endl;
        cout << "6. Exit " << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:{
                EmployeeManagement().employeeMenu();
                break;
            }
            case 2:{
                CustomerManagement().customerMenu();
                break;
            }
            case 3:{
                FacilityManagement().facilityMenu();
                break;
            }
            case 4:{
                BookingManagement().bookingMenu();
                break;
            }
            case 5:{
                break;
            }
            case 6:{
                check = false;
                break;
            }

        }
    }
}
