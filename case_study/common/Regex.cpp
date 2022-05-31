//
// Created by Kienroro on 12/05/2022.
//

#include "Regex.h"
#include "../model/bean/Employee.h"

string Regex::regexName() {
    string name;
    getline(cin, name);
    while (1) {
        if (name == "") {
            cout << "Name cannot be left blank. Enter : ";
            getline(cin, name);
        }
        if (name != "") {
            break;
        }
    }
    for (int i = 0; i < name.length() - 1; i++) {
        if (name[i] == ' ' && name[i + 1] == ' ') {
            removeSpaceWhite(name, i);
            i--;
        }
    }
    if(name[0] == ' ') {
        removeSpaceWhite(name, 0);
    }
    name[0] = toupper(name[0]);
    for (int i = 1; i < name.length(); i++) {
        if (name[i] != ' ' && name[i - 1] == ' ') {
            name[i] = toupper(name[i]);
        }
    }
    return name;
}

string Regex::regexPhone() {
    cout << "Enter phone number: ";
    string phone;
    getline(cin,phone);
    return phone;
}

void Regex::removeSpaceWhite(string &name, int n) {
    for (int i = n; i < name.length() - 1; i++) {
        name[i] = name[i + 1];

    }
    name.pop_back();
}

string Regex::regexEmail() {
    string email;
    bool check;
    do {
        cout << "Enter your email: ";
        getline(cin, email);
        check = email.find("@gmail.com") != -1;
        if (!check) {
            cout << "Email invalidate" << endl;
        }
    } while (!check);
    return email;
}

string Regex::chooseLevel() {
    string level;
    int choose;
    do {cout << "CHOOSE  " << endl;
        cout << "1. Junior high school" << endl;
        cout << "2. High school" << endl;
        cout << "3. University" << endl;
        cout << "Enter choose: ";
        cin >> choose;
        cin.ignore();
        switch (choose) {
            case 1: {
                level = "Junior high school";
                break;
            }
            case 2: {
                level = "High school";
                break;
            }
            case 3: {
                level = "University";
                break;
            }
        }
    }while(choose > 3 || choose < 1);
    return level;
}

string Regex::choosePosition() {
    string position;
    int choose;
    do {cout << "CHOOSE POSITION " << endl;
        cout << "1. Employee" << endl;
        cout << "2. Manager" << endl;
        cout << "3. Department manager" << endl;
        cout << "Enter choose: ";
        cin >> choose;
        cin.ignore();
        switch (choose) {
            case 1: {
                position = "Employee";
                break;
            }
            case 2: {
                position = "Manager";
                break;
            }
            case 3: {
                position = "Department manager";
                break;
            }
        }
    }while(choose > 3 || choose < 1);
    return position;
}

string Regex::regexIdCard() {
    return std::string();
}

string Regex::chooseGender() {
    string gender;
    int choose;
    do {cout << "CHOOSE GENDER " << endl;
        cout << "1. Male" << endl;
        cout << "2. Female" << endl;
        cout << "Enter choose: ";
        cin >> choose;
        cin.ignore();
        switch (choose) {
            case 1: {
                gender = "Male";
                break;
            }
            case 2: {
                gender = "Female";
                break;
            }
        }
    }while(choose > 2 || choose < 1);
    return gender;
}

string Regex::chooseCustomerType() {
    string type;
    int choose;
    do {cout << "CHOOSE CUSTOMER TYPE " << endl;
        cout << "1. VIP" << endl;
        cout << "2. Diamond" << endl;
        cout << "3. Platinum" << endl;
        cout << "4. Normal" << endl;
        cout << "Enter choose: ";
        cin >> choose;
        cin.ignore();
        switch (choose) {
            case 1: {
                type = "VIP";
                break;
            }
            case 2: {
                type = "Diamond";
                break;
            }
            case 3: {
                type = "Platinum";
                break;
            }
            case 4: {
                type = "Normal";
                break;
            }
        }
    }while(choose > 4 || choose < 1);
    return type;
}
