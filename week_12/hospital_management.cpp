
/*
Name: Sammy Njuguna
Reg.no. : CT101/G/28858/25
Description: A hospital staff program that demonstrates abstraction and calculates salaries differently for doctors and nurses.
*/

#include <iostream>
#include <string>
using namespace std;

class MedicalStaff {
protected:
    string staffName;
    string staffID;

public:
    MedicalStaff(string name, string id) {
        staffName = name;
        staffID = id;
    }

    void displayDetails() {
        cout << "Staff name: " << staffName << endl;
        cout << "Staff ID: " << staffID << endl;
    }

    virtual double calculateSalary() = 0;

    virtual ~MedicalStaff() {}
};

class Doctor : public MedicalStaff {
private:
    double basicSalary;
    double allowance;

public:
    Doctor(string name, string id, double salary, double extra)
        : MedicalStaff(name, id) {
        basicSalary = salary;
        allowance = extra;
    }

    double calculateSalary() override {
        return basicSalary + allowance;
    }
};

class Nurse : public MedicalStaff {
private:
    double basicSalary;
    double overtimePay;

public:
    Nurse(string name, string id, double salary, double overtime)
        : MedicalStaff(name, id) {
        basicSalary = salary;
        overtimePay = overtime;
    }

    double calculateSalary() override {
        return basicSalary + overtimePay;
    }
};

int main() {
    Doctor doctor("James", "D001", 80000, 15000);
    Nurse nurse("Mary", "N001", 45000, 5000);

    MedicalStaff* staff;

    staff = &doctor;
    staff->displayDetails();
    cout << "Doctor salary: " << staff->calculateSalary() << "\n\n";

    staff = &nurse;
    staff->displayDetails();
    cout << "Nurse salary: " << staff->calculateSalary() << endl;

    return 0;
}

