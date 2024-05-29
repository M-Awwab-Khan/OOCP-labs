#include <iostream>
// Question 1: Rectangle class
class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() {
        return length * width;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    // Test the classes
    Rectangle rect(5, 4);
    std::cout << "Rectangle Area: " << rect.calculateArea() << std::endl;
    std::cout << "Rectangle Perimeter: " << rect.calculatePerimeter() << std::endl;
    return 0;
}