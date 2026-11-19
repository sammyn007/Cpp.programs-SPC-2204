
/*
Name: Sammy Njuguna
Reg.no. : CT101/G/28858/25
Description: A program that reads daily sales transactions from a text file and calculates the total sales.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    double amount;
    double totalSales = 0;

    ifstream file("sales.txt");

    if (!file) {
        cout << "Could not open sales.txt.\n";
        return 1;
    }

    while (file >> amount) {
        totalSales += amount;
    }

    file.close();

    cout << "Total sales for the day: " << totalSales << endl;

    return 0;
}

