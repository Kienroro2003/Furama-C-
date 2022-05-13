//
// Created by Kienroro on 22/04/2022.
//
#include "../model/bean/Employee.h"
#include "Service.h"

#ifndef CASE_STUDY_EMPLOYEESERVICE_H
#define CASE_STUDY_EMPLOYEESERVICE_H


class EmployeeService: public Service{
private:
    list<Employee> employeeList;
public:
    void add() override;

    void display() override;

    void edit() override;



};


#endif //CASE_STUDY_EMPLOYEESERVICE_H
