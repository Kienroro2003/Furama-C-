#ifndef CASE_STUDY_READANDWRITECUSTOMER_H
#define CASE_STUDY_READANDWRITECUSTOMER_H


#include "../model/bean/Customer.h"

class ReadAndWriteCustomer {
public:
    void writeFile(string path,list<Customer> &list);
    list<Customer> readFile(string path);

};


#endif //CASE_STUDY_READANDWRITECUSTOMER_H
