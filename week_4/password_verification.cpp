/*
Name : Sammy Njuguna
Reg.no. : CT101/G/28858/25
Description : A system to verify passwords using do-while-loop

*/


#include <iostream>
#include <string>
using namespace std;

int main() {
    string correctUsername = "admin";
    string correctPassword = "1234";

    string username;
    string password;

    do {
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        if (username == correctUsername &&
            password == correctPassword) {

            cout << "Access Granted" << endl;

        }
        else {
            cout << "Incorrect credentials, try again"
                 << endl;
        }

    } while (username != correctUsername ||
             password != correctPassword);

    return 0;
}
