//
// Created by Kienroro on 22/04/2022.
//

#include "EmployeeService.h"
#include "../util/ReadAndWriteEmployee.h"
#include "../common/Regex.h"

void EmployeeService::display() {
    for(int i = 0; i < 192; i++){
        cout << "*";
    }
    cout << endl;
    cout <<setw(5 ) << "ID"
         <<setw(25) << "NAME"
         <<setw(27) << "BIRTHDAY"
         <<setw(10) << "GENDER"
         <<setw(15) << "ID CARD"
         <<setw(15) << "PHONE NUMBER"
         <<setw(25) << "EMAIL"
         << setw(33) << "LEVEL"
         << setw(16) << "POSITION"
         << setw(17) << "SALARY"
         << endl;
    for(int i = 0; i < 192; i++){
        cout << "*";
    }
    cout << endl;
    for (Employee e: ReadAndWriteEmployee().readFile(
            "/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/employee")) {
        e.output();
        cout <<
        "-------+---------------------------------------+---------+---------+--------------+--------------+-------------------------------------------------+---------+-------------------+-------------+"<<endl;
    }

}

void EmployeeService::add() {
    employeeList = ReadAndWriteEmployee().readFile(
            "/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/employee");
    string employeeId = "SV-000" + to_string(employeeList.size());
    cout << "Nhập họ và tên nhân viên: ";
    string fullName = Regex().regexName();
//    getline(cin, fullName);
    Date dateOfBirth;
    dateOfBirth.input();
    string gender;
    gender = Regex().chooseGender();
    cout << "Nhập chứng minh nhân dân: ";
    string idCard;
    getline(cin, idCard);
    cout << "Nhập số điện thoại: ";
    string numberPhone;
    getline(cin, numberPhone);
    string email = Regex().regexEmail();
    string level = Regex().chooseLevel();
    string position;
    position = Regex().choosePosition();
    cout << "Nhập lương: ";
    float salary;
    cin >> salary;
    cin.ignore();
    Employee employee(employeeId, fullName, dateOfBirth, gender, idCard, numberPhone, email, level,
                      position,
                      salary);
    employeeList.push_back(employee);
    ReadAndWriteEmployee().writeFile("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/employee",
                                     employeeList);
}

void EmployeeService::edit() {
    employeeList = ReadAndWriteEmployee().readFile(
            "/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/employee");
    display();
//    list<Employee> list;

    cout << "Nhập id cần chỉnh sửa: ";
    string id;
    cin >> id;
    Employee *employee;
    bool check = true;
    for (Employee &e: employeeList) {
        if (id == e.getIdCode()) {
            employee = &e;
            check = false;
            break;
        }
    }
    if (check) {
        cout << "Not found employee" << endl;
        return;
    } else {
        while (1) {
            cout << "Editing for id: " << employee->getIdCode() << endl;
            cout << "1. Edit name" << "(" << employee->getFullName() << ")" << endl;
            cout << "2. Edit birthday" << "(" << employee->getDateOfBirth().getDay() << "/" << employee->getDateOfBirth
                    ().getMonth() << "/" << employee->getDateOfBirth().getYear() << ")" <<
                 endl;
            cout << "3. Edit gender" << "(" << employee->getSex() << ")" << endl;
            cout << "4. Edit id card" << "(" << employee->getId() << ")" << endl;
            cout << "5. Edit phone number" << "(" << employee->getPhoneNumber() << ")" << endl;
            cout << "6. Edit email" << "(" << employee->getEmailAddress() << ")" << endl;
            cout << "7. Edit level" << "(" << employee->getLevel() << ")" << endl;
            cout << "8. Edit position" << "(" << employee->getPosition() << ")" << endl;
            cout << "9. Edit salary " << "(" << employee->getSalary() << ")" << endl;
            cout << "10. Exit" << endl;
            int choose;
            cout << "Enter choose: ";
            cin >> choose;
            cin.ignore();
            switch (choose) {
                case 1: {
                    string name;
                    cout << "Enter name: ";
                    getline(cin, name);
                    employee->setFullName(name);
                    break;
                }
                case 2: {
                    Date date;
                    date.input();
                    employee->setDateOfBirth(date);
                    break;
                }
                case 3: {
                    string gender;
                    cout << "Enter gender: ";
                    getline(cin, gender);
                    employee->setSex(gender);
                    break;
                }
                case 4: {
                    string id;
                    cout << "Enter id card: ";
                    getline(cin, id);
                    employee->setId(id);
                    break;
                }
                case 5: {
                    string phone;
                    cout << "Enter phone number: ";
                    getline(cin, phone);
                    employee->setPhoneNumber(phone);
                    break;
                }
                case 6: {
                    string email;
                    cout << "Enter email: ";
                    getline(cin, email);
                    employee->setEmailAddress(email);
                    break;
                }
                case 7: {
                    string level;
                    cout << "Enter level: ";
                    getline(cin, level);
                    employee->setLevel(level);
                    break;
                }
                case 8: {
                    string position;
                    cout << "Enter position: ";
                    getline(cin, position);
                    employee->setPosition(position);
                    break;
                }
                case 9: {
                    double salary;
                    cout << "Enter salary: ";
                    cin >> salary;
                    cin.ignore();
                    break;
                }
                case 10: {
                    return;
                }
            }
            ReadAndWriteEmployee().writeFile("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/employee",
                                             employeeList);

        }
    }
//    for(Employee e : employeeList){
//        if(e.getIdCode() == )
//        list.push_back(e);
//    }


}
