#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void move() {
        cout << "Vehicle is moving" << endl;
    }
};

class Car : public Vehicle {
public:
    void move() override {
        cout << "Car is moving" << endl;
    }
};

int main() {
    Vehicle v;
    Car c;

    v.move();
    c.move();

    return 0;
}
