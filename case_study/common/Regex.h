//
// Created by Kienroro on 12/05/2022.
//
#include "../header.h"

#ifndef CASE_STUDY_REGEX_H
#define CASE_STUDY_REGEX_H


class Regex {
private:
    void removeSpaceWhite(string &name,int n);
public:
    string regexName();

    string regexPhone();

    string regexIdCard();

    string regexEmail();

    string chooseLevel();

    string choosePosition();

    string chooseGender();

    string chooseCustomerType();

};


#endif //CASE_STUDY_REGEX_H
