

#include "BookingManagement.h"
#include "../service/BookingService.h"
#include "../service/ContractService.h"

void BookingManagement::bookingMenu() {
    while (1) {
        cout << "*****************BOOKING MENU*****************" << endl;
        cout << "1. Add new booking" << endl;
        cout << "2. Display list booking" << endl;
        cout << "3. Create new contracts" << endl;
        cout << "4. Display list contracts" << endl;
        cout << "5. Edit contracts" << endl;
        cout << "6. Return main menu" << endl;
        int choose;
        cout << "Enter choose: ";
        cin >> choose;
        cin.ignore();
        switch (choose) {
            case 1: {
                BookingService().addBooking();
                break;
            }
            case 2: {
                BookingService().displayBooking();
                break;
            }
            case 3: {
                ContractService().addContract();
                break;
            }
            case 4: {
                ContractService().displayContract();
                break;
            }
            case 5: {
                ContractService().editContract();
                break;
            }
            case 6: {
                return;
            }
        }
    }

}
