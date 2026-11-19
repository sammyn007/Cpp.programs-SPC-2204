
/*
Name: Sammy Njuguna
Reg.no. : CT101/G/28858/25
Description: A shape drawing program that demonstrates runtime polymorphism using virtual functions.
*/

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }

    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Triangle" << endl;
    }
};

int main() {
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;

    Shape* shape;

    shape = &circle;
    shape->draw();

    shape = &rectangle;
    shape->draw();

    shape = &triangle;
    shape->draw();

    return 0;
}

