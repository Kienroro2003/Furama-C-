#include "ReadAndWriteEmployee.h"

list<Employee> ReadAndWriteEmployee::readFile(string path) {
    list<Employee> listEmployee;
    ifstream fileIn(path, ios_base::in);
    if (fileIn.is_open()) {
        while (1) {
            string idCode;
            getline(fileIn, idCode, ',');
            string fullName;
            getline(fileIn, fullName, ',');
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
            string phoneNumber;
            getline(fileIn, phoneNumber, ',');
            string email;
            getline(fileIn, email, ',');
            string level;
            getline(fileIn, level, ',');
            string position;
            getline(fileIn, position, ',');
            double salary;
            fileIn >> salary;
            fileIn.ignore();
            if (fileIn.eof())break;
            Employee employee(idCode, fullName, dateOfBirth, sex, id, phoneNumber, email, level, position, salary);
            listEmployee.push_back(employee);
        }
        fileIn.close();
    } else {
        cout << "Mo file khong thanh cong!" << endl;
    }
    fileIn.close();
    return listEmployee;
}

void ReadAndWriteEmployee::writeFile(string path, list<Employee> &list) {
    ofstream fileOut(path, ios_base::out);
    if (fileOut.is_open()) {
        for (Employee e: list) {
            fileOut << e.getIdCode() << ','
                    << e.getFullName() << ','
                    << e.getDateOfBirth().getDay() << "/"
                    << e.getDateOfBirth().getMonth() << "/"
                    << e.getDateOfBirth().getYear() << ','
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
    } else {
        cout << "Mo file khong thanh cong " << endl;
    }


}

