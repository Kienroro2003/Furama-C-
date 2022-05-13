//
// Created by Kienroro on 22/04/2022.
//

#include "CustomerManagement.h"

void CustomerManagement::customerMenu() {
    while(true){
        cout << "*****************CUSTOMER MENU*****************" << endl;
        cout << "1. Display all customer" << endl;
        cout << "2. Add new customer" << endl;
        cout << "3. Edit customer" << endl;
        cout << "4. Return main memu" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        switch(choice){
            case 1:{
                break;
            }
            case 2:{
                break;
            }
            case 3:{
                break;
            }
            case 4:{
                return;
            }
        }
    }

}
