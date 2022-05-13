//
// Created by Kienroro on 22/04/2022.
//

#include "EmployeeService.h"
#include "../util/ReadAndWriteEmployee.h"

void EmployeeService::display() {
    cout << setw(20) << "||=======ID========|"
    << setw(20) << "|=======Name=======|"
    << setw(20) << "|=====Birthday=====|"
    << setw(20) << "|======Gender======|"
    << setw(20) << "|======Id card=====|"
    << setw(20) << "|=====Phone number====|"
    << setw(20) << "|=======Email======|"
    << setw(20) << "|=====Position====||"
    << endl;
    for (Employee e: ReadAndWriteEmployee().readFile("/Users/kienroro2003/Desktop/C++/case_study/data/employee")) {
        e.output();
    }

}

void EmployeeService::add() {
    employeeList = ReadAndWriteEmployee().readFile("/Users/kienroro2003/Desktop/C++/case_study/data/employee");
    string employeeId = "SV-000" + to_string(employeeList.size());
    cout << "Nhập họ và tên nhân viên: ";
    string fullName;
    getline(cin, fullName);
    cout << "Nhập ngày sinh: ";
    string birthday;
    getline(cin,birthday);
    cout << "Nhập giới tính: ";
    string gender;
    getline(cin,gender);
    cout << "Nhập chứng minh nhân dân: ";
    string idCard;
    getline(cin, idCard);
    cout << "Nhập số điện thoại: ";
    string numberPhone;
    getline(cin, numberPhone);
    cout << "Nhập email: ";
    string email;
    getline(cin, email);
    cout << "Nhập trình độ: ";
    string level;
    getline(cin, level);
    cout << "Nhập vị trí: ";
    string position;
    getline(cin, position);
    cout << "Nhập lương: ";
    float salary;
    cin >> salary;
    cin.ignore();
    Employee employee(employeeId, fullName, birthday, gender, idCard, numberPhone, email, level,
                      position,
                      salary);
    employeeList.push_back(employee);
    ReadAndWriteEmployee().writeFile("/Users/kienroro2003/Desktop/C++/case_study/data/employee", employeeList);
}

void EmployeeService::edit() {
    employeeList = ReadAndWriteEmployee().readFile("/Users/kienroro2003/Desktop/C++/case_study/data/employee");
    display();
    cout << "Nhập id cần chỉnh sửa: ";
    string id;
    cin >> id;
    Employee employee;
    bool check = true;
    for(Employee e : employeeList) {
        if (id == e.getIdCode()) {
            employee = e;
            check = false;
            break;
        }
    }
    if(check){
        cout << "Not found employee" << endl;
        return;
    }
    cout << "Editing for id: " << employee.getIdCode() << endl;
    cout << "1. Edit name " << endl;
    cout << "2. Edit birthday" << endl;
    cout << "3. Edit gender" << endl;
    cout << "4. Edit id card" << endl;
    cout << "5. Edit phone number" << endl;
    cout << "6. Edit email" << endl;
    cout << "7. Edit level" << endl;
    cout << "8. Edit position" << endl;
    int choose;
    cout << "Enter choose: ";
    cin >> choose;
    cin.ignore();
    switch(choose){
        case 1:{
            string name;
            cout << "Enter name: ";
            getline(cin,name);
            employee.setFullName(name);
            break;
        }
        case 2:{
            string birthday;
            cout << "Enter birthday: ";
            getline(cin,birthday);
            employee.setDateOfBirth(birthday);
            break;
        }
        case 3:{
            string gender;
            cout << "Enter gender: ";
            getline(cin,gender);
            employee.setSex(gender);
            break;
        }
        case 4:{
            string id;
            cout << "Enter id card: ";
            getline(cin,id);
            employee.setId(id);
            break;
        }
        case 5:{
            string phone;
            cout << "Enter phone number: ";
            getline(cin,phone);
            employee.setPhoneNumber(phone);
            break;
        }
        case 6:{
            string email;
            cout << "Enter email: ";
            getline(cin,email);
            employee.setEmailAddress(email);
            break;
        }
        case 7:{
            string level;
            cout << "Enter level: ";
            getline(cin,level);
            employee.setLevel(level);
            break;
        }
        case 8:{
            string position;
            cout << "Enter position: ";
            getline(cin,position);
            employee.setPosition(position);
            break;
        }

    }
    for(Employee e : employeeList){
        e.output();
    }
//    ReadAndWriteEmployee().writeFile("/Users/kienroro2003/Desktop/C++/case_study/data/employee",employeeList);

}
