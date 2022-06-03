#include "ContractService.h"
#include "../util/ReadAndWriteBooking.h"
#include "../util/ReadAndWriteContract.h"

void ContractService::displayContract() {
    vectorContract = ReadAndWriteContract().readContract

            ("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/contract");
    for(int i = 0 ; i < 76; i++){
        cout << "*";
    }
    cout << endl;
    cout <<setw(12) << "ID CONTRACT"
    <<setw(15) << "ID BOOKING"
    <<setw(15) << "PREPAYMENT"
    <<setw(17) << "TOTAL PAYMENT"
    <<setw(15) << "ID CUSTOMER"
    << endl;
    for(int i = 0 ; i < 76; i++){
        cout << "*";
    }
    cout << endl;
    for(Contract c : vectorContract){
        c.output();
        cout << "---------------+--------------+--------------+--------------+--------------+"<<endl;
    }

}

void ContractService::addContract() {
    ReadAndWriteContract().writeContract("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/contract",
                                         vectorContract);
    setBooking = ReadAndWriteBooking().readBooking("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/booking");
    for(Booking b : setBooking){
        queueBooking.push(b);
    }
    string idContract = "CT-000" + to_string(vectorContract.size());
    Booking booking = queueBooking.front();
    Customer customer = booking.getCustomer();
    queueBooking.pop();
    cout << "ID Booking: " << booking.getIdBooking() << endl;
    cout << "ID Contract: " << idContract << endl;
    cout << "ID Customer: " << customer.getIdCode() << endl;
    cout << "Enter deposit: ";
    int pre;
    cin >> pre;
    cin.ignore();
    cout << "Enter total amount: ";
    int total;
    cin >> total;
    cin.ignore();
    Contract contract(idContract,booking,pre,total,customer);
    vectorContract.push_back(contract);
    ReadAndWriteContract().writeContract("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/contract",
                                         vectorContract);
    ReadAndWriteBooking().writeBooking("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/booking",
                                       queueBooking);

}

void ContractService::editContract() {

    Contract* contract;
    displayContract();
    cout << "Enter id contract: ";
    string idContract;
    bool check = true;
    getline(cin,idContract);
    for(Contract& c: vectorContract){
        if(c.getIdContract() == idContract){
            contract = &c;
            check = false;
        }
    }
    if(check){
        cout << "Id contract not found" << endl;
    }else{
        while(1){
            cout << "Editing for id: " << contract->getIdContract() << endl;
            cout << "1. Edit prepayment (" << contract->getPrePayment() << ")" << endl;
            cout << "2. Edit total payment (" << contract->getTotalPayment() << ")" << endl;
            cout << "3. Stop" << endl;
            cout << "Enter choose: ";
            int choose;
            cin >> choose;
            cin.ignore();
            switch(choose){
                case 1:{
                    cout << "Enter deposit: ";
                    int deposit;
                    cin >> deposit;
                    cin.ignore();
                    contract->setPrePayment(deposit);
                    break;
                }
                case 2:{
                    cout << "Enter total amount: ";
                    int total;
                    cin >> total;
                    cin.ignore();
                    contract->setTotalPayment(total);
                    break;
                }
                case 3:{
                    return;
                }
            }
            ReadAndWriteContract().writeContract
            ("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/contract",vectorContract);
        }
    }

}
