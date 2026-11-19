
/*
Name: Sammy Njuguna
Reg.no. : CT101/G/28858/25
Description: An employee salary program that protects employee information using encapsulation.
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Employee {
private:
    string name;
    string employeeID;
    double basicSalary;

public:
    void setEmployeeDetails() {
        cout << "Enter employee name: ";
        getline(cin, name);

        cout << "Enter employee ID: ";
        getline(cin, employeeID);

        cout << "Enter basic salary: ";
        cin >> basicSalary;
    }

    double calculateSalary() {
        return basicSalary + (0.10 * basicSalary);
    }

    void displayEmployeeDetails() {
        cout << fixed << setprecision(2);

        cout << "\n--- Employee Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Basic salary: " << basicSalary << endl;
        cout << "Net salary: " << calculateSalary() << endl;
    }
};

int main() {
    Employee employee;

    employee.setEmployeeDetails();
    employee.displayEmployeeDetails();

    return 0;
}

