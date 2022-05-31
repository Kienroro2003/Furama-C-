//
// Created by Kienroro on 08/05/2022.
//

#ifndef CASE_STUDY_CUSTOMERSERVICE_H
#define CASE_STUDY_CUSTOMERSERVICE_H


#include "Service.h"
#include "../model/bean/Customer.h"

class CustomerService: public Service {
private:
    list<Customer> customerList;
public:
    void add() override;

    void display() override;

    void edit() override;

};


#endif //CASE_STUDY_CUSTOMERSERVICE_H
