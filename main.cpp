#include <iostream>
#include <string>
using namespace std;

struct Date {
    int year;
    int month;
    int day;

    Date() {
        year = 0;
        month = 0;
        day = 0;
    }

    Date(int y, int m, int d) {
        year = y;
        month = m;
        day = d;
    }
};

class Student {
private:
    string name;
    string address;
    Date birthdate;
    string cccd;

public:
    Student() {
        name = "";
        address = "";
        birthdate = Date();
        cccd = "";
    }

    Student(string n) {
        name = n;
        address = "";
        birthdate = Date();
        cccd = "";
    }

    Student(Date d) {
        name = "";
        address = "";
        birthdate = d;
        cccd = "";
    }

    Student(string name, string address) {
        this->name = name;
        this->address = address;
        birthdate = Date();
        cccd = "";
    }

    Student(string name, string address, Date birthdate) {
        this->name = name;
        this->address = address;
        this->birthdate = birthdate;
        cccd = "";
    }

    Student(string name, string address, Date birthdate, string cccd) {
        this->name = name;
        this->address = address;
        this->birthdate = birthdate;
        this->cccd = cccd;
    }

    void setStudentInfo() {
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter address: ";
        getline(cin, address);

        cout << "Enter CCCD: ";
        getline(cin, cccd);

        cout << "Enter birth year: ";
        cin >> birthdate.year;

        cout << "Enter birth month: ";
        cin >> birthdate.month;

        cout << "Enter birth day: ";
        cin >> birthdate.day;

        cin.ignore();
    }

    Student getStudentInfo(string cccd) {
        if (this->cccd == cccd) {
            return *this;
        }

        return Student();
    }
};