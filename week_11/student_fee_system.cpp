
/*
Name: Sammy Njuguna
Reg.no. : CT101/G/28858/25
Description: A student fee program that uses encapsulation to protect the fee balance and process payments.
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student {
private:
    string name;
    string admissionNumber;
    double feeBalance;

public:
    void inputStudentData() {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter admission number: ";
        getline(cin, admissionNumber);

        cout << "Enter fee balance: ";
        cin >> feeBalance;
    }

    void makePayment() {
        double amount;

        cout << "Enter payment amount: ";
        cin >> amount;

        if (amount > 0 && amount <= feeBalance) {
            feeBalance -= amount;
            cout << "Payment received successfully.\n";
        } else {
            cout << "Invalid payment amount.\n";
        }
    }

    void displayStatus() {
        cout << fixed << setprecision(2);

        cout << "\n--- Student Fee Status ---\n";
        cout << "Name: " << name << endl;
        cout << "Admission number: " << admissionNumber << endl;
        cout << "Remaining fee balance: " << feeBalance << endl;
    }
};

int main() {
    Student student;

    student.inputStudentData();
    student.makePayment();
    student.displayStatus();

    return 0;
}

