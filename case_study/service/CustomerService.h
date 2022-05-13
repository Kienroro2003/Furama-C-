//
// Created by Kienroro on 08/05/2022.
//

#ifndef CASE_STUDY_CUSTOMERSERVICE_H
#define CASE_STUDY_CUSTOMERSERVICE_H


#include "Service.h"

class CustomerService: public Service {
public:
    void add() override;

    void display() override;

    void edit() override;

};


#endif //CASE_STUDY_CUSTOMERSERVICE_H
