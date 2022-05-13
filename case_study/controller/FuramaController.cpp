//
// Created by Kienroro on 22/04/2022.
//

#include "FuramaController.h"

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
                break;
            }
            case 4:{
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
