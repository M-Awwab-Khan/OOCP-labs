#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}
    friend double calculatePerimeter(Rectangle);
};
double calculatePerimeter(Rectangle r) {
    return 2 * (r.length + r.width);
}
int main(){
    Rectangle r(12, 12);
    cout << calculatePerimeter(r) << endl;
    return 0;
}