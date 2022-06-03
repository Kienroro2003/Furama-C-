#ifndef CASE_STUDY_CONTRACTSERVICE_H
#define CASE_STUDY_CONTRACTSERVICE_H


#include "../model/bean/Contract.h"

class ContractService {
    vector<Contract> vectorContract;
    set<Booking> setBooking;
    queue<Booking> queueBooking;
public:
    void displayContract();
    void addContract();
    void editContract();
};


#endif //CASE_STUDY_CONTRACTSERVICE_H
