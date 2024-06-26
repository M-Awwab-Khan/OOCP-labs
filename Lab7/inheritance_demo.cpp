#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
    string color;

public:
    Shape(const string& c) : color(c) {}

    virtual double area() const = 0;

    virtual void display() const {
        cout << "Color: " << color << endl;
    }

    virtual ~Shape() = default;
};

class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(const string& c, double w, double h) : Shape(c), width(w), height(h) {}

    double area() const override {
        return width * height;
    }

    void display() const override {
        Shape::display();
        cout << "Width: " << width << ", Height: " << height << ", Area: " << area() << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(const string& c, double r) : Shape(c), radius(r) {}

    double area() const override {
        return 3.14159 * radius * radius;
    }

    void display() const override {
        Shape::display();
        cout << "Radius: " << radius << ", Area: " << area() << endl;
    }
};

int main() {
   
    Rectangle r("Red", 5.0, 3.0);
    Circle c("Blue", 4.0);

    r.display();
    c.display();

    return 0;
}
