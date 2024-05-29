#include <iostream>

class Circle {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double calculateArea() {
        return 3.14159 * radius * radius;
    }

    double calculateCircumference() {
        return 2 * 3.14159 * radius;
    }
};

int main() {

    Circle circle(3);
    std::cout << "Circle Area: " << circle.calculateArea() << std::endl;
    std::cout << "Circle Circumference: " << circle.calculateCircumference() << std::endl;
    return 0;
}