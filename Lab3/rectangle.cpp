#include <iostream>
#include <string>
using namespace std;

struct Rectangle {
  double length;
  double width;

  double area() {
    return this->length * this->width;
  };

};

int main() {
  double length, width;
  cout << "Enter length of Rectangle: ";
  cin >> length;
  cout << "Enter width of Rectangle: ";
  cin >> width;

  Rectangle rect { length, width };
  cout << "Area: " << rect.area() << endl;

  return 0;
}