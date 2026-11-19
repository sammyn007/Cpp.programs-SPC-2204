
/*
Name: Sammy Njuguna
Reg.no. : CT101/G/28858/25
Description: A vehicle program that uses inheritance to display general vehicle details and car-specific information.
*/

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string brand;
    int year;

public:
    void inputVehicle() {
        cout << "Enter vehicle brand: ";
        getline(cin, brand);

        cout << "Enter year of manufacture: ";
        cin >> year;
        cin.ignore();
    }

    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Year of manufacture: " << year << endl;
    }
};

class Car : public Vehicle {
private:
    int doors;
    double engineCapacity;

public:
    void inputCar() {
        inputVehicle();

        cout << "Enter number of doors: ";
        cin >> doors;

        cout << "Enter engine capacity (cc): ";
        cin >> engineCapacity;
    }

    void displayCar() {
        displayVehicle();
        cout << "Number of doors: " << doors << endl;
        cout << "Engine capacity: " << engineCapacity << " cc" << endl;
    }
};

int main() {
    Car car;

    cout << "CAR DETAILS\n";
    car.inputCar();

    cout << "\n--- Vehicle Record ---\n";
    car.displayCar();

    return 0;
}

