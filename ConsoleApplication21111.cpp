#include <iostream>
#include <cstring>
#include <Windows.h>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Fio {
    char* lname;
    char* name;
    char* mname;
};

class Student {
    Fio fio;
    Date BirthDate;
    char* phone;
    char* city;
    char* country;
    char* university;
    char* UCity;
    char* UCountry;
    char* group;

};

void intput() {

    char buffer[100];
    cout << "¬вед≥ть пр≥звище: ";
    cin.getline(buffer, 100);

    }


    int main() {
    
        SetConsoleOutputCP(65001);
        SetConsoleCP(65001);
    
    }