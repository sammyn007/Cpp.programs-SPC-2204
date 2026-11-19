
/*
Name: Sammy Njuguna
Reg.no. : CT101/G/28858/25
Description: A program that reads student examination records from a binary file and displays each student's name and marks.
*/

#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    char name[50];
    char registrationNumber[30];
    float totalMarks;
};

int main() {
    Student student;

    ifstream file("results.dat", ios::binary);

    if (!file) {
        cout << "Could not open results.dat.\n";
        return 1;
    }

    cout << "--- Student Examination Results ---\n";

    while (file.read(reinterpret_cast<char*>(&student), sizeof(student))) {
        cout << "Name: " << student.name << endl;
        cout << "Marks: " << student.totalMarks << endl;
        cout << "-------------------------\n";
    }

    file.close();

    return 0;
}

