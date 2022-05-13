//
// Created by Kienroro on 08/05/2022.
//

#ifndef CASE_STUDY_READANDWRITEEMPLOYEE_H
#define CASE_STUDY_READANDWRITEEMPLOYEE_H


#include "../model/bean/Employee.h"

class ReadAndWriteEmployee {
public:
    list<Employee> readFile(string path);
    void writeFile(string path,Employee &e);
    void writeFile(string path,list<Employee> &list);

};


#endif //CASE_STUDY_READANDWRITEEMPLOYEE_H
