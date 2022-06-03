#include "ReadAndWriteCustomer.h"

list<Customer> ReadAndWriteCustomer::readFile(string path) {
    list<Customer> list;
    ifstream fileIn(path, ios_base::in);
    if (fileIn.is_open()) {
        /**
         *  Customer(const string &idCode, const string &fullName, const string &dateOfBirth, const string &sex,
             const string &id, const string &phoneNumber, const string &emailAddress, const string &typeCustomer,
             const string &address);
         */
        while (1) {
            string idCode;
            getline(fileIn, idCode, ',');
            string name;
            getline(fileIn, name, ',');
            int day;
            fileIn >> day;
            fileIn.ignore();
            int month;
            fileIn >> month;
            fileIn.ignore();
            int year;
            fileIn >> year;
            fileIn.ignore();
            Date dateOfBirth(day, month, year);
            string sex;
            getline(fileIn, sex, ',');
            string id;
            getline(fileIn, id, ',');
            string phone;
            getline(fileIn, phone, ',');
            string email;
            getline(fileIn, email, ',');
            string type;
            getline(fileIn, type, ',');
            string address;
            getline(fileIn, address);
            if (fileIn.eof())break;
            Customer customer(idCode, name, dateOfBirth, sex, id, phone, email, type, address);
            list.push_back(customer);
        }
        fileIn.close();
    } else {
        cout << "Mo file khong thanh cong" << endl;
    }
    return list;
}

void ReadAndWriteCustomer::writeFile(string path, list<Customer> &list) {
    ofstream fileOut(path, ios_base::out);
    if (fileOut.is_open()) {
        for (Customer c: list) {
            fileOut << c.getIdCode() << ","
                    << c.getFullName() << ","
                    << c.getDateOfBirth().getDay() << "/"
                    << c.getDateOfBirth().getMonth() << "/"
                    << c.getDateOfBirth().getYear() << ','
                    << c.getSex() << ","
                    << c.getId() << ","
                    << c.getPhoneNumber() << ","
                    << c.getEmailAddress() << ","
                    << c.getTypeCustomer() << ","
                    << c.getAddress() << endl;
        }
        fileOut.close();
    } else {
        cout << "Mo file khong thanh cong" << endl;
    }

}
