
/*
Name: Sammy Njuguna
Reg.no. : CT101/G/28858/25
Description: A payment program that demonstrates function overloading for cash, card and mobile payments.
*/

#include <iostream>
using namespace std;

class Payment {
public:
    void processPayment(double amount) {
        cout << "Cash payment: " << amount << endl;
    }

    void processPayment(double amount, double fee) {
        cout << "Card payment: " << amount + fee << endl;
    }

    void processPayment(double amount, double fee, double discount) {
        cout << "Mobile payment: " << amount + fee - discount << endl;
    }
};

int main() {
    Payment payment;

    payment.processPayment(1500);
    payment.processPayment(1500, 50);
    payment.processPayment(1500, 30, 100);

    return 0;
}

