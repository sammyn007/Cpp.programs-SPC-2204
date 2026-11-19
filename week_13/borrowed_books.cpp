
/*
Name: Sammy Njuguna
Reg.no. : CT101/G/28858/25
Description: A library program that saves borrowed book titles to a text file without deleting earlier records.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string title;

    cout << "Enter the borrowed book title: ";
    getline(cin, title);

    ofstream file("borrowed_books.txt", ios::app);

    if (!file) {
        cout << "Could not open the file.\n";
        return 1;
    }

    file << title << endl;
    file.close();

    cout << "Book title saved successfully.\n";

    return 0;
}

