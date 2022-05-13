//
// Created by Kienroro on 12/05/2022.
//
#include "../header.h"

#ifndef CASE_STUDY_REGEX_H
#define CASE_STUDY_REGEX_H


class Regex {
private:
    void removeSpaceWhite(string name,int &n);
public:
    string regexName();

    string regexBirthday();

    string regexId();

    string regexPhone();

};


#endif //CASE_STUDY_REGEX_H
