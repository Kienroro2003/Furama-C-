#include "CustomerService.h"
#include "../util/ReadAndWriteCustomer.h"
#include "../common/Regex.h"

void CustomerService::add() {
    customerList = ReadAndWriteCustomer().readFile
            ("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/customer");
    string idCode = "KH-000" + to_string(customerList.size());

    cout << "Enter full name: ";
    string fullName;
    fullName = Regex().regexName();
    Date date;
    date.input();
    string gender;
    gender = Regex().chooseGender();
    cout << "Enter id card: ";
    string id;
    getline(cin, id);
    string phoneNumber;
    phoneNumber = Regex().regexPhone();
    string email;
    email = Regex().regexEmail();

    string typeCustomer;
    typeCustomer = Regex().chooseCustomerType();
    cout << "Enter address: ";
    string address;
    getline(cin, address);
    Customer customer(idCode, fullName, date, gender, id, phoneNumber, email, typeCustomer, address);
    customerList.push_back(customer);
    ReadAndWriteCustomer().writeFile("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/customer",
                                     customerList);

}

void CustomerService::display() {
    customerList = ReadAndWriteCustomer().readFile
            ("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/customer");
    for(int i = 0; i <= 176; i++){
        cout << "*";
    }
    cout << endl;
    cout <<setw(5 )<< "ID"
         <<setw(25)<< "NAME"
         <<setw(27)<< "BIRTHDAY"
         <<setw(10)<< "GENDER"
         <<setw(15)<< "ID CARD"
         <<setw(15)<< "PHONE NUMBER"
         <<setw(25)<< "EMAIL"
         <<setw(33)<< "TYPE"
         <<setw(17)<< "ADDRESS"
         << endl;
    for(int i = 0; i <= 176; i++){
        cout << "*";
    }
    cout << endl;
    for (Customer c: customerList) {
        c.output();
        cout <<
        "--------+---------------------------------------+---------+---------+--------------+--------------+-------------------------------------------------+---------+-----------------+"<<endl;
    }
}

void CustomerService::edit() {
    customerList = ReadAndWriteCustomer().readFile
            ("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/customer");
    display();
    cout << "Enter id customer edit: ";
    string id;
    getline(cin, id);
    Customer *customer;
    bool check = true;
    for (Customer &c: customerList) {
        if (c.getIdCode() == id) {
            customer = &c;
            check = false;
            break;
        }
    }

    if (check) {
        cout << "Id not found" << endl;
    } else {
        while (1) {
            cout << "Editing for id: " << customer->getIdCode() << endl;
            cout << "1. Edit name" << "(" << customer->getFullName() << ")" << endl;
            cout << "2. Edit birthday" << "(" << customer->getDateOfBirth().getDay() << "/" << customer->getDateOfBirth
                    ().getMonth() << "/" << customer->getDateOfBirth().getYear() << ")" << endl;
            cout << "3. Edit gender" << "(" << customer->getSex() << ")" << endl;
            cout << "4. Edit id card" << "(" << customer->getId() << ")" << endl;
            cout << "5. Edit phone number" << "(" << customer->getPhoneNumber() << ")" << endl;
            cout << "6. Edit email" << "(" << customer->getEmailAddress() << ")" << endl;
            cout << "7. Edit type customer" << "(" << customer->getTypeCustomer() << ")" << endl;
            cout << "8. Edit address" << "(" << customer->getAddress() << ")" << endl;
            cout << "9. Exit" << endl;
            int choose;
            cout << "Enter choose: ";
            cin >> choose;
            cin.ignore();
            switch (choose) {
                case 1: {
                    string name;
                    cout << "Enter name: ";
                    getline(cin, name);
                    customer->setFullName(name);
                    break;
                }
                case 2: {
                    Date date;
                    date.input();
                    customer->setDateOfBirth(date);
                    break;
                }
                case 3: {
                    string gender;
                    cout << "Enter gender: ";
                    getline(cin, gender);
                    customer->setSex(gender);
                    break;
                }
                case 4: {
                    string id;
                    cout << "Enter id card: ";
                    getline(cin, id);
                    customer->setId(id);
                    break;
                }
                case 5: {
                    string phone;
                    cout << "Enter phone number: ";
                    getline(cin, phone);
                    customer->setPhoneNumber(phone);
                    break;
                }
                case 6: {
                    string email;
                    cout << "Enter email: ";
                    getline(cin, email);
                    customer->setEmailAddress(email);
                    break;
                }
                case 7: {
                    string type;
                    cout << "Enter type customer: ";
                    getline(cin, type);
                    customer->setTypeCustomer(type);
                    break;
                }
                case 8: {
                    string address;
                    cout << "Enter address: ";
                    getline(cin, address);
                    customer->setAddress(address);
                    break;
                }
                case 9: {
                    return;
                }
            }
            ReadAndWriteCustomer().writeFile("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/customer",
                                             customerList);

        }
    }
}
