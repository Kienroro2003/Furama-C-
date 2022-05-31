#include "controller/FuramaController.h"
#include "model/bean/Facility.h"
#include "model/bean/Room.h"
#include "util/ReadAndWriteEmployee.h"
#include "model/bean/House.h"
#include "common/Regex.h"
#include "model/bean/Customer.h"
#include "model/bean/Villa.h"
#include "header.h"
#include "model/bean/Booking.h"
#include "util/ReadAndWriteBooking.h"


//class Student {
//public:
//    int id;
//    string name;
//
//    Student(const int id, const string name) {
//        this->id = id;
//        this->name = name;
//    }
//
//    void output() {
//        cout << id << "\t" << name << endl;
//    }
//
//    bool operator<(const Student s) {
//        return this->id < s.id;
//    }
//};

int main() {

    FuramaController().displayMainMenu();
//Student s1(1,"kien");
//Student s2(2,"kien");
//Student s3(3,"kien");
//Student s4(4,"kien");
//map<Student,int > map;
//map[s1] = 1;
//map[s2] = 1;
//map[s3] = 1;
//map[s4] = 1;
//map[s1] = 1;
//Regex regex;
//string name = regex.regexName();
//cout << name << endl;



//string phone;
//getline(cin,phone);
//bool check = phone.find("090") == 0 || phone.find("091") == 0;
//if(!check){
//    cout << "Dau so dien thoai phai la 090 hoac 091" << endl;
//}else if(phone.length() != 10){
//    cout << "So dien thoai phai 10 so" << endl;
//}else{
//    cout << phone << endl;
//}
//
//string email = "kienroro@gmail.com";
//bool check = email.find("@gmail.com") != -1;
//if(!check){
//    cout << "Email phai co duoi la @gmail.com" << endl;
//}else{
//    cout << email << endl;
//}

//string level = Regex().chooseLevel();
//cout << level << endl;

//
//    queue<Booking> queueBooking;
//    set<Booking> setBooking = ReadAndWriteBooking().readBooking
//            ("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/booking");
//    for (Booking b: setBooking) {
//        b.output();
//    }
//    for (Booking b: setBooking) {
//        queueBooking.push(b);
//    }
//    queueBooking->pop();
//    for (Booking b: setBooking) {
//        b.output();
//    }

//    while(!queueBooking.empty()){
//        queueBooking.front().output();
//        queueBooking.pop();
//    }


    return 0;
}