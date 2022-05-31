//
// Created by Kienroro on 14/05/2022.
//
#include "../header.h"
#include "../model/bean/Contract.h"

#ifndef CASE_STUDY_READANDWRITECONTRACT_H
#define CASE_STUDY_READANDWRITECONTRACT_H


class ReadAndWriteContract {


public:
    vector<Contract> readContract(string path);
    void writeContract(string path, vector<Contract> contracts);
};


#endif //CASE_STUDY_READANDWRITECONTRACT_H
