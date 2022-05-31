//
// Created by Kienroro on 22/04/2022.
//
#include "../header.h"

#include "EmployeeManagement.h"

void EmployeeManagement::employeeMenu() {
    EmployeeService *employeeService = new EmployeeService;
    bool check = true;
    while (check) {
        cout << "*****************EMPLOYEE MENU*****************" << endl;
        cout << "1. Display all employee" << endl;
        cout << "2. Add new employee" << endl;
        cout << "3. Edit employee" << endl;
        cout << "4. Return main menu" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        cin.ignore();
        switch (choice) {
            case 1: {
                employeeService->display();
                break;
            }
            case 2: {
                employeeService->add();
                break;
            }
            case 3: {
                employeeService->edit();
                break;
            }
            case 4: {
                return;
            }
        }
    }
}
