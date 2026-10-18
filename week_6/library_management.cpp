/*
Name : Sammy Njuguna
Reg. no. : Sammy Njuguna
Description :Library book management system using clases
*/


#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    int copies;

// get user details
    void inputDetails() {
        cout << "Enter book title: ";
        getline(cin, title);

        cout << "Enter author: ";
        getline(cin, author);

        cout << "Enter number of copies: ";
        cin >> copies;
    }

// function to borrow books
    void borrowBook() {
        if (copies > 0) {
            copies--;
            cout << "Book borrowed successfully." << endl;
        } else {
            cout << "No copies available." << endl;
        }
    }

//  desplay details
    void displayDetails() {
        cout << "\n----- BOOK DETAILS -----" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Available Copies: " << copies << endl;
    }
};

int main() {
    Book book;

    book.inputDetails();
    book.borrowBook();
    book.displayDetails();

    return 0;
}
