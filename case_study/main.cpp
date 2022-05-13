#include <fstream>
#include "controller/FuramaController.h"
#include "model/bean/Facility.h"
#include "model/bean/Room.h"
#include "util/ReadAndWriteEmployee.h"
#include "model/bean/House.h"
#include "common/Regex.h"
#include <math.h>

#define MAX 1000

string hello() {
    return "hello";
}

int main() {
//    Employee employee("NV-0004","Nguyen Tran Kien","06/01/2003","nam","0123123123","0337468208","kienroro281@gmail"
//                                                                                                ".com","Dai hoc",
//                                                                                                "Giam doc",1000);
//    ReadAndWriteEmployee().writeFile("/Users/kienroro2003/Desktop/C++/case_study/data/employee",employee);
//    list<Employee> list = ReadAndWriteEmployee().readFile("/Users/kienroro2003/Desktop/C++/case_study/data/employee");
//    for(Employee e :list){
//        e.output();
//    }
FuramaController().displayMainMenu();



    return 0;
}