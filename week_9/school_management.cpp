
/*
Name: Sammy Njuguna
Reg.no. : CT101/G/28858/25
Description: A school management program that stores and displays student details using inheritance.
*/

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    string admissionNumber;
    string studentClass;

public:
    void inputStudent() {
        inputPerson();

        cout << "Enter admission number: ";
        getline(cin, admissionNumber);

        cout << "Enter class: ";
        getline(cin, studentClass);
    }

    void displayStudent() {
        displayPerson();
        cout << "Admission number: " << admissionNumber << endl;
        cout << "Class: " << studentClass << endl;
    }
};

int main() {
    Student student;

    cout << "STUDENT DETAILS\n";
    student.inputStudent();

    cout << "\n--- Student Record ---\n";
    student.displayStudent();

    return 0;
}

