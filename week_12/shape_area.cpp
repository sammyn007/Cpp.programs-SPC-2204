
/*
Name: Sammy Njuguna
Reg.no. : CT101/G/28858/25
Description: An area calculator that uses an abstract class to calculate the areas of circles and rectangles.
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Shape {
public:
    virtual double calculateArea() = 0;

    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double calculateArea() override {
        const double PI = 3.14159;
        return PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() override {
        return length * width;
    }
};

int main() {
    Circle circle(7);
    Rectangle rectangle(10, 5);

    Shape* shape;

    shape = &circle;

    cout << fixed << setprecision(2);
    cout << "Area of circle: " << shape->calculateArea() << endl;

    shape = &rectangle;
    cout << "Area of rectangle: " << shape->calculateArea() << endl;

    return 0;
}

