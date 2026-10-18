/*
Name : Sammy Njuguna
Reg.no. : CT101/G/28858/25
Description : A 2D hotel room occupancy

*/


#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int occupancy[5][10];

    // Generate 0 for vacant and 1 for occupied
    for (int floor = 0; floor < 5; floor++) {
        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;
        }
    }

    for (int floor = 0; floor < 5; floor++) {
        int occupied = 0;
        int vacant = 0;

        for (int room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1) {
                occupied++;
            } else {
                vacant++;
            }
        }
//show out the hotel rooms details/occupancy
        cout << "Floor " << floor + 1 << endl;
        cout << "Occupied rooms: " << occupied << endl;
        cout << "Vacant rooms: " << vacant << endl;
        cout << endl;
    }

    return 0;
}
