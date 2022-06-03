#include "ReadAndWriteContract.h"
#include "../model/bean/Room.h"

void ReadAndWriteContract::writeContract(string path, vector<Contract> contracts) {
    ofstream fileOut("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/contract", ios_base::out);
    if (fileOut.is_open()) {
        for (Contract c: contracts) {
            fileOut << c.getIdContract() << ","
                    << c.getBooking().getIdBooking() << ","
                    << c.getBooking().getStartDate().getDay() << "/"
                    << c.getBooking().getStartDate().getMonth() << "/"
                    << c.getBooking().getStartDate().getYear() << ","
                    << c.getBooking().getEndDate().getDay() << "/"
                    << c.getBooking().getEndDate().getMonth() << "/"
                    << c.getBooking().getEndDate().getYear() << ","
                    << c.getCustomer().getIdCode() << ","
                    << c.getCustomer().getFullName() << ","
                    << c.getCustomer().getDateOfBirth().getDay() << "/"
                    << c.getCustomer().getDateOfBirth().getMonth() << "/"
                    << c.getCustomer().getDateOfBirth().getYear() << ","
                    << c.getCustomer().getSex() << ","
                    << c.getCustomer().getId() << ","
                    << c.getCustomer().getPhoneNumber() << ","
                    << c.getCustomer().getEmailAddress() << ","
                    << c.getCustomer().getTypeCustomer() << ","
                    << c.getCustomer().getAddress() << ","
                    << c.getBooking().getFacility()->getIdFacility() << ","
                    << c.getBooking().getFacility()->getNameService() << ","
                    << c.getBooking().getFacility()->getAreaUser() << ","
                    << c.getBooking().getFacility()->getRentalPrice() << ","
                    << c.getBooking().getFacility()->getRentalPeopleMax() << ","
                    << c.getBooking().getFacility()->getStyleRental() << ","
                    << c.getPrePayment() << ","
                    << c.getTotalPayment()
                    << endl;
        }
        fileOut.close();
    } else {
        cout << "File not found" << endl;
    }

}

vector<Contract> ReadAndWriteContract::readContract(string path) {
    ifstream fileIn("/Users/kienroro2003/Desktop/C++/Furama-C-/case_study/data/contract",ios_base::in);
    vector<Contract> vectorContract;
    if(fileIn.is_open()){
        while(1) {
            string idContract;
            getline(fileIn, idContract, ',');
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
            Date startDate(dayStart, monthStart, yearStart);
            int dayEnd;
            fileIn >> dayEnd;
            fileIn.ignore();
            int monthEnd;
            fileIn >> monthEnd;
            fileIn.ignore();
            int yearEnd;
            fileIn >> yearEnd;
            fileIn.ignore();
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
            string phoneNumber;
            getline(fileIn, phoneNumber, ',');
            string email;
            getline(fileIn, email, ',');
            string type;
            getline(fileIn, type, ',');
            string address;
            getline(fileIn, address, ',');
            Customer customer(idCustomer, name, birthday, gender, idCard, phoneNumber, email, type, address);
            string idFacility;
            getline(fileIn,idFacility,',');
            string nameService;
            getline(fileIn,nameService,',');
            double areaUser;
            fileIn >> areaUser;
            fileIn.ignore();
            int rentalPrice;
            fileIn >> rentalPrice;
            fileIn.ignore();
            int rentalPeopleMax;
            fileIn >> rentalPeopleMax;
            fileIn.ignore();
            string style;
            getline(fileIn,style,',');
            Facility* facility = new Room(idFacility,nameService,areaUser,rentalPrice,rentalPeopleMax,style,"");
            Booking booking(idBooking,startDate,endDate,customer,facility);
            int prePayment;
            fileIn >> prePayment;
            fileIn.ignore();
            int totalPayment;
            fileIn >> totalPayment;
            fileIn.ignore();
            if (fileIn.eof())break;
            Contract contract(idContract,booking,prePayment,totalPayment,customer);
            vectorContract.push_back(contract);
        }
        fileIn.close();
    }else{
        cout << "File not found" << endl;
    }
    return vectorContract;
}
