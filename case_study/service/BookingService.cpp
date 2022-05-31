//
// Created by Kienroro on 14/05/2022.
//

#include "BookingService.h"
#include "../model/bean/Villa.h"
#include "../util/ReadAndWriteBooking.h"
#include "CustomerService.h"
#include "../util/ReadAndWriteCustomer.h"
#include "FacilityService.h"
#include "../util/ReadAndWriteFacility.h"

void BookingService::displayBooking() {
    setBooking = ReadAndWriteBooking().readBooking
            ("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/booking");
    for(int i = 0 ; i < 95; i++){
        cout << "*";
    }
    cout << endl;
    cout << setw(12) << "ID"
    << setw(18) << "START DATE"
    << setw(16) << "END DATE"
    << setw(16) << "ID CUST"
    << setw(13) << "NAME FAC"
    << setw(15) << "ID FACI"
    << endl;
    for(int i = 0 ; i < 95; i++){
        cout << "*";
    }
    cout << endl;
    for(Booking b : setBooking){
        b.output();
        cout << "-----------------+---------------+---------------+----------------+----------+----------------+"
        << endl;
    }

}

void BookingService::addBooking() {
    setBooking = ReadAndWriteBooking().readBooking("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/booking");
    string idBooking = "BO-000" + to_string(setBooking.size());
    Date startDate;
    startDate.input();
    Date endDate;
    endDate.input();
    cout << "----------LIST CUSTOMER----------" << endl;
    CustomerService().display();
    list<Customer> customers = ReadAndWriteCustomer().readFile
            ("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/customer");
    cout << "Enter id customer: ";
    string id;
    getline(cin,id);
    Customer customer;
    for(Customer c: customers){
        if(c.getIdCode() == id){
            customer = c;
            break;
        }
    }
    FacilityService().display();
    cout << "Enter id facility: ";
    string idFacility;
    getline(cin,idFacility);
    Facility* facility;
    map<Room,int> mapRoom(ReadAndWriteFacility().readRoom
    ("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/room"));
    map<House,int> mapHouse(ReadAndWriteFacility().readHouse
            ("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/house"));
    map<Villa,int> mapVilla(ReadAndWriteFacility().readVilla
    ("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/villa"));
    for(auto& m : mapRoom){
        if(m.first.getIdFacility() == idFacility){
            Room room = m.first;
            facility = &room;
            m.second++;
            break;
        }
    }
    for(auto& m : mapHouse){
        if(m.first.getIdFacility() == idFacility){
            House house = m.first;
            facility = &house;
            m.second++;
            break;
        }
    }
    for(auto& m : mapVilla){
        if(m.first.getIdFacility() == idFacility){
            Villa villa = m.first;
            facility = &villa;
            m.second++;
            break;
        }
    }
    Booking booking(idBooking,startDate,endDate,customer,facility);
    setBooking.insert(booking);
    ReadAndWriteFacility().writeHouse("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/house",mapHouse);
    ReadAndWriteFacility().writeVilla("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/villa",mapVilla);
    ReadAndWriteFacility().writeRoom("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/room",mapRoom);
    ReadAndWriteBooking().writeBooking("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/booking",setBooking);

}
