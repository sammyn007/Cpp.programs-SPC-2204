/*

Name : Sammy Njuguna 
Reg No. : CT101/G/28858/25
Description : simple calculator using switch statement 

*/
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

//get user inputs
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;

        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;

        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;

// division and check division by zero
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Cannot divide by zero!" << endl;
            }
            break;

        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}

