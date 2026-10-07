/*
Name : Sammy Njuguna
Reg.no. : CT101/G/28858/25
Description : A system to calculate employees salaries

*/


#include <iostream>
#include <string>
using namespace std;

string employeeName;
double basicSalary;
double overtimeHours;
double ratePerHour = 500;

// get employees details
void getEmployeeDetails() {
    cout << "Enter employee name: ";
    getline(cin, employeeName);

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    cout << "Enter overtime hours: ";
    cin >> overtimeHours;
}

//function to calculate the overtime pay
double calculateOvertimePay() {
    return overtimeHours * ratePerHour;
}

// calculate net salaey
double calculateNetSalary() {
    double overtimePay = calculateOvertimePay();

    return basicSalary + overtimePay;
}

// dispaly payslip
void displayPayslip() {
    double overtimePay = calculateOvertimePay();
    double netSalary = calculateNetSalary();

    cout << "\n===== EMPLOYEE PAYSLIP =====" << endl;
    cout << "Employee Name: " << employeeName << endl;
    cout << "Basic Salary: " << basicSalary << endl;
    cout << "Overtime Hours: " << overtimeHours << endl;
    cout << "Overtime Pay: " << overtimePay << endl;
    cout << "Net Salary: " << netSalary << endl;
}

int main() {
    getEmployeeDetails();

    displayPayslip();

    return 0;
}
