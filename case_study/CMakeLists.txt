cmake_minimum_required(VERSION 3.21)
project(case_study)

set(CMAKE_CXX_STANDARD 14)

add_executable(case_study main.cpp header.h
        controller/FuramaController.cpp
        controller/FuramaController.h controller/EmployeeManagement.cpp controller/EmployeeManagement.h
        controller/CustomerManagement.cpp controller/CustomerManagement.h service/EmployeeService.cpp
        service/EmployeeService.h model/bean/Person.cpp model/bean/Person.h model/bean/Customer.cpp model/bean/Customer.h model/bean/Employee.cpp model/bean/Employee.h model/bean/Facility.cpp model/bean/Facility.h model/bean/Room.cpp model/bean/Room.h model/bean/Villa.cpp model/bean/Villa.h model/bean/House.cpp model/bean/House.h model/bean/Booking.cpp model/bean/Booking.h model/bean/Contract.cpp model/bean/Contract.h service/Service.h service/CustomerService.cpp service/CustomerService.h util/ReadAndWriteEmployee.cpp util/ReadAndWriteEmployee.h common/Regex.cpp common/Regex.h service/FacilityService.cpp service/FacilityService.h service/BookingService.cpp service/BookingService.h service/ContractService.cpp service/ContractService.h service/PromotionService.cpp service/PromotionService.h util/ReadAndWriteCustomer.cpp util/ReadAndWriteCustomer.h util/ReadAndWriteFacility.cpp util/ReadAndWriteFacility.h util/ReadAndWriteBooking.cpp util/ReadAndWriteBooking.h util/ReadAndWriteContract.cpp util/ReadAndWriteContract.h controller/FacilityManagement.cpp controller/FacilityManagement.h controller/BookingManagement.cpp controller/BookingManagement.h controller/PromotionManagement.cpp controller/PromotionManagement.h model/bean/Date.cpp model/bean/Date.h)
