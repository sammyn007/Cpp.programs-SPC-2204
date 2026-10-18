/*
Name : Sammy Njuguna
Reg.no. : CT101/G/28848/25
Desription : hotel room occupancy in 3D

*/


#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int chain[3][5][10];
    int totalOccupied = 0;

    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {

                chain[branch][floor][room] = rand() % 2;

                if (chain[branch][floor][room] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    cout << "Total occupied rooms across all branches: "
         << totalOccupied << endl;

    return 0;
}
