#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    string admissionNumber;
    double feeBalance;

// get student details
    void inputStudent() {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter admission number: ";
        getline(cin, admissionNumber);

        cout << "Enter fee balance: ";
        cin >> feeBalance;
    }

// dunction to make payment
    void makePayment() {
        double payment;

        cout << "Enter amount to pay: ";
        cin >> payment;

        if (payment <= feeBalance) {
            feeBalance -= payment;
            cout << "Payment successful." << endl;
        } else {
            cout << "Payment is greater than fee balance." << endl;
        }
    }

// dispaly status
    void displayStatus() {
        cout << "\n----- FEE STATUS -----" << endl;
        cout << "Student: " << name << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Balance: " << feeBalance << endl;
    }
};

int main() {
    Student student;

    student.inputStudent();
    student.makePayment();
    student.displayStatus();

    return 0;
}

