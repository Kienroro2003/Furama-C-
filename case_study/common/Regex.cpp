//
// Created by Kienroro on 12/05/2022.
//

#include "Regex.h"

string Regex::regexName() {
    string name;
    getline(cin, name);
    for (int i = 0; i < name.length() - 1; i++) {
        if (name[i] == ' ' && name[i + 1] == ' ') {
            removeSpaceWhite(name,i);
        }
    }
    for(int i = 0 ; i < name.length() - 1; i++){
        name[i] = name[i + 1];
    }

    return name;
}

string Regex::regexBirthday() {
    return std::string();
}

string Regex::regexId() {
    return std::string();
}

string Regex::regexPhone() {
    return std::string();
}

void Regex::removeSpaceWhite(string name, int &n) {
    for(int i = n ; i < name.length() - 1 ; i++){
        name[i] = name[i + 1];
        n--;
    }
}
