

#include "CustomerManagement.h"
#include "../service/CustomerService.h"

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
        cin.ignore();
        switch(choice){
            case 1:{
                CustomerService().display();
                break;
            }
            case 2:{
                CustomerService().add();
                break;
            }
            case 3:{
                CustomerService().edit();
                break;
            }
            case 4:{
                return;
            }
        }
    }
}
