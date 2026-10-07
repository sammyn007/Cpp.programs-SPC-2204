/*
Name : Sammy Njuguna
Reg. no. : CT101/G/28858/25
Description : A system to claculate employees bonus using For Loop

*/

#include <iostream>
#include <string>
using namespace std;                              
int main() {                                          string employeeName;
    double basicSalary;
    double bonus;                                     double totalSalary;

    for (int i = 1; i <= 5; i++) {

        cout << "\nEmployee " << i << endl;

// enter employee details
        cout << "Enter employee name: ";
        cin >> employeeName;

        cout << "Enter basic salary: ";
        cin >> basicSalary;

        bonus = 0.05 * basicSalary;

        totalSalary = basicSalary + bonus;

// print out employee details and total salary
        cout << "\nEmployee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }

    return 0;
}
