/*
Name : Sammy Njuguna
Reg. no. : CT101/28858/25
Description : Weekly r3venue tracker implemwnting arrays

*/

#include <iostream>
using namespace std;

int main() {
    double revenue[7];
    double total = 0;
    double average;

    for (int i = 0; i < 7; i++) {
        cout << "Enter revenue for day " << i + 1 << ": ";
        cin >> revenue[i];

        total += revenue[i];
    }

    average = total / 7;

    cout << "\nTotal Weekly Revenue: " << total << endl;
    cout << "Average Daily Revenue: " << average << endl;

    return 0;
}

