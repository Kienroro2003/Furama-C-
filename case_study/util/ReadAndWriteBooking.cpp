//
// Created by Kienroro on 14/05/2022.
//

#include "ReadAndWriteBooking.h"
#include "../model/bean/Room.h"

void ReadAndWriteBooking::writeBooking(string path, set<Booking> setBooking) {
    ofstream fileOut("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/booking", ios_base::out);
    if (fileOut.is_open()) {
        for (Booking b: setBooking) {
            fileOut << b.getIdBooking() << ","
                    << b.getStartDate().getDay() << "/"
                    << b.getStartDate().getMonth() << "/"
                    << b.getStartDate().getYear() << ","
                    << b.getEndDate().getDay() << "/"
                    << b.getEndDate().getMonth() << "/"
                    << b.getEndDate().getYear() << ","
                    << b.getCustomer().getIdCode() << ","
                    << b.getCustomer().getFullName() << ","
                    << b.getCustomer().getDateOfBirth().getDay() << "/"
                    << b.getCustomer().getDateOfBirth().getMonth() << "/"
                    << b.getCustomer().getDateOfBirth().getYear() << ','
                    << b.getCustomer().getSex() << ","
                    << b.getCustomer().getId() << ","
                    << b.getCustomer().getPhoneNumber() << ","
                    << b.getCustomer().getEmailAddress() << ","
                    << b.getCustomer().getTypeCustomer() << ","
                    << b.getCustomer().getAddress() << ","
                    << b.getFacility()->getIdFacility() << ","
                    << b.getFacility()->getNameService() << ","
                    << b.getFacility()->getAreaUser() << ","
                    << b.getFacility()->getRentalPrice() << ","
                    << b.getFacility()->getRentalPeopleMax() << ","
                    << b.getFacility()->getStyleRental()
                    << endl;
        }
        fileOut.close();
    } else {
        cout << "File not found" << endl;
    }
}


set<Booking> ReadAndWriteBooking::readBooking(string path) {
    ifstream fileIn(path, ios_base::in);
    set<Booking> setBooking;
    if (fileIn.is_open()) {
        while (1) {
            string idBooking;
            getline(fileIn, idBooking, ',');
            int dayStart;
            fileIn >> dayStart;
            fileIn.ignore();
            int monthStart;
            fileIn >> monthStart;
            fileIn.ignore();
            int yearStart;
            fileIn >> yearStart;
            fileIn.ignore();
            int dayEnd;
            fileIn >> dayEnd;
            fileIn.ignore();
            int monthEnd;
            fileIn >> monthEnd;
            fileIn.ignore();
            int yearEnd;
            fileIn >> yearEnd;
            fileIn.ignore();
            Date startDate(dayStart, monthStart, yearStart);
            Date endDate(dayEnd, monthEnd, yearEnd);
            string idCustomer;
            getline(fileIn, idCustomer, ',');
            string name;
            getline(fileIn, name, ',');
            int day;
            fileIn >> day;
            fileIn.ignore();
            int month;
            fileIn >> month;
            fileIn.ignore();
            int year;
            fileIn >> year;
            fileIn.ignore();
            Date birthday(day, month, year);
            string gender;
            getline(fileIn, gender, ',');
            string idCard;
            getline(fileIn, idCard, ',');
            string phone;
            getline(fileIn, phone, ',');
            string email;
            getline(fileIn, email, ',');
            string type;
            getline(fileIn, type, ',');
            string address;
            getline(fileIn, address, ',');
            Customer customer(idCustomer, name, birthday, gender, idCard, phone, email, type, address);
            string idFacility;
            getline(fileIn, idFacility, ',');
            string nameFacility;
            getline(fileIn, nameFacility, ',');
            double areaUser;
            fileIn >> areaUser;
            fileIn.ignore();
            int price;
            fileIn >> price;
            fileIn.ignore();
            int people;
            fileIn >> people;
            fileIn.ignore();
            string style;
            getline(fileIn, style);
            Facility *facility = new Room(idFacility, nameFacility, areaUser, price, people, style, "");
            if (fileIn.eof())break;
            Booking booking(idBooking, startDate, endDate, customer, facility);
            setBooking.insert(booking);
        }
        fileIn.close();
    } else {
        cout << "File not found" << endl;
    }
    return setBooking;
}

void ReadAndWriteBooking::writeBooking(string path, queue<Booking> queueBooking) {
    ofstream fileOut("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/booking", ios_base::out);
    if (fileOut.is_open()) {
        while(!queueBooking.empty()){
            Booking b = queueBooking.front();
            queueBooking.pop();
            fileOut << b.getIdBooking() << ","
                    << b.getStartDate().getDay() << "/"
                    << b.getStartDate().getMonth() << "/"
                    << b.getStartDate().getYear() << ","
                    << b.getEndDate().getDay() << "/"
                    << b.getEndDate().getMonth() << "/"
                    << b.getEndDate().getYear() << ","
                    << b.getCustomer().getIdCode() << ","
                    << b.getCustomer().getFullName() << ","
                    << b.getCustomer().getDateOfBirth().getDay() << "/"
                    << b.getCustomer().getDateOfBirth().getMonth() << "/"
                    << b.getCustomer().getDateOfBirth().getYear() << ','
                    << b.getCustomer().getSex() << ","
                    << b.getCustomer().getId() << ","
                    << b.getCustomer().getPhoneNumber() << ","
                    << b.getCustomer().getEmailAddress() << ","
                    << b.getCustomer().getTypeCustomer() << ","
                    << b.getCustomer().getAddress() << ","
                    << b.getFacility()->getIdFacility() << ","
                    << b.getFacility()->getNameService() << ","
                    << b.getFacility()->getAreaUser() << ","
                    << b.getFacility()->getRentalPrice() << ","
                    << b.getFacility()->getRentalPeopleMax() << ","
                    << b.getFacility()->getStyleRental()
                    << endl;
        }
        fileOut.close();
    } else {
        cout << "File not found" << endl;
    }
}
