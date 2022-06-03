#include "../../header.h"
#include "Booking.h"

#ifndef CASE_STUDY_CONTRACT_H
#define CASE_STUDY_CONTRACT_H


class Contract {
private:
    string idContract;
    Booking booking;
    int prePayment;
    int totalPayment;
    Customer customer;

public:
    Contract();

    Contract(const string &idContract,
             const Booking &booking,
             int prePayment,
             int totalPayment,
             const Customer &customer);

    void output();

    const string &getIdContract() const;

    void setIdContract(const string &idContract);

    const Booking &getBooking() const;

    void setBooking(const Booking &booking);

    int getPrePayment() const;

    void setPrePayment(int prePayment);

    int getTotalPayment() const;

    void setTotalPayment(int totalPayment);

    const Customer &getCustomer() const;

    void setCustomer(const Customer &customer);
};


#endif //CASE_STUDY_CONTRACT_H
