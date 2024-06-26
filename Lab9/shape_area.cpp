#include <iostream>
#include <string>
using namespace std;

class Shape
{
public:
    virtual double area() = 0;
};
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double area() override
    {
        return 3.142 * radius * radius;
    }
};
class Rectangle : public Shape
{
private:
    double height;
    double width;

public:
    Rectangle(double h, double w) : height(h), width(w) {}
    double area() override
    {
        return height * width;
    }
};

int main()
{
    Circle c(12);
    Rectangle r(12, 12);
    cout << "Area of Circle: " << c.area() << endl;
    cout << "Area of Rectangle: " << r.area() << endl;
    return 0;
}
