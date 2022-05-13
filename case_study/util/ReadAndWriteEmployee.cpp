//
// Created by Kienroro on 08/05/2022.
//

#include "ReadAndWriteEmployee.h"

list<Employee> ReadAndWriteEmployee::readFile(string path) {
    list<Employee> listEmployee;
    ifstream fileIn(path, ios_base::in);
    if (fileIn.is_open()) {
        while (!fileIn.eof()) {
            string idCode;
            getline(fileIn, idCode, ',');
            string fullName;
            getline(fileIn, fullName, ',');
            string dateOfBirth;
            getline(fileIn, dateOfBirth, ',');
            string sex;
            getline(fileIn, sex, ',');
            string id;
            getline(fileIn, id, ',');
            string phoneNumber;
            getline(fileIn, phoneNumber, ',');
            string email;
            getline(fileIn, email, ',');
            string level;
            getline(fileIn, level, ',');
            string position;
            getline(fileIn, position,',');
            double salary;
            fileIn >> salary;
            fileIn.ignore();
            Employee employee(idCode, fullName, dateOfBirth, sex, id, phoneNumber, email, level, position,salary);
            listEmployee.push_back(employee);
        }
        listEmployee.pop_back();
    } else {
        cout << "Mo file khong thanh cong!" << endl;
    }
    fileIn.close();
    return listEmployee;
}

void ReadAndWriteEmployee::writeFile(string path, Employee &e) {
    ofstream fileOut(path, ios_base::app);
    fileOut << e.getIdCode() << ','
            << e.getFullName() << ','
            << e.getDateOfBirth() << ','
            << e.getSex() << ','
            << e.getId() << ','
            << e.getPhoneNumber() << ','
            << e.getEmailAddress() << ','
            << e.getLevel() << ','
            << e.getPosition() << ','
            << e.getSalary()
            << endl;

    fileOut.close();

}

void ReadAndWriteEmployee::writeFile(string path, list<Employee> &list) {
    ofstream fileOut(path, ios_base::out);
    for(Employee e:list){
        fileOut << e.getIdCode() << ','
                << e.getFullName() << ','
                << e.getDateOfBirth() << ','
                << e.getSex() << ','
                << e.getId() << ','
                << e.getPhoneNumber() << ','
                << e.getEmailAddress() << ','
                << e.getLevel() << ','
                << e.getPosition() << ','
                << e.getSalary()
                << endl;
    }

    fileOut.close();
}

