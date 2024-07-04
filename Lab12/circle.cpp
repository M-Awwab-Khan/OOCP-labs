#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    friend double calculateArea(Circle);
};
double calculateArea(Circle c) {
    return 3.142 * c.radius * c.radius;
}
int main() {
    Circle c(12);
    cout << calculateArea(c) << endl;
    return 0;
}