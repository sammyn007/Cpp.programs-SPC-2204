/*
Name : Sammy Njuguna
Reg. no. : CT101/G/28858/25
Description : Savings withdrawal system using while loop

*/


#include <iostream>
using namespace std;

int main() {
    double balance;
    double withdrawalAmount;

// get user details
    cout << "Enter account balance: ";
    cin >> balance;

    while (balance > 0) {

        cout << "\nEnter withdrawal amount: ";
        cin >> withdrawalAmount;

        if (withdrawalAmount > balance) {
            cout << "Withdrawal amount is greater than "
                 << "the balance." << endl;
            break;
        }

        balance = balance - withdrawalAmount;

        cout << "Remaining balance: "
             << balance << endl;

        if (balance == 0) {
            cout << "Balance is zero." << endl;
        }
    }

    return 0;
}
