/*
Name : Sammy Njuguna
Reg. no. : CT101/G/28858/25
Description : A system to calculate water bill implemwnting cpp function

*/


#include <iostream>
#include <string>
using namespace std;

string customerName;
double unitsConsumed;
double ratePerUnit = 100;

// function to calculate total bill
double calculateBill() {
    return unitsConsumed * ratePerUnit;
}

// function to get discount to be allowed
double applyDiscount(double bill) {
    if (unitsConsumed > 100) {
        return bill * 0.10;
    }

    return 0;
}

// get user details
void getCustomerDetails() {
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter number of units consumed: ";
    cin >> unitsConsumed;
}

void displayBill() {
    double totalBill;
    double discount;
    double finalAmount;

    totalBill = calculateBill();
    discount = applyDiscount(totalBill);
    finalAmount = totalBill - discount;

// display the bill
    cout << "\n===== WATER BILL =====" << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Units Consumed: " << unitsConsumed << endl;
    cout << "Total Bill Before Discount: "<< totalBill << endl;
    cout << "Discount: " << discount << endl;
    cout << "Final Amount Payable: "<< finalAmount << endl;
}

int main() {
    getCustomerDetails();

    displayBill();

    return 0;
}
