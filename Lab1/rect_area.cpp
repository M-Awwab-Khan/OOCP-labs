#include <iostream>
#include <string>

int main () {
  double length {};
  double width {};

  std::cout << "Enter length of the Rectangle: ";
  std::cin >> length;
  std::cout << std::endl;

  std::cout << "Enter width of the Rectangle: ";
  std::cin >> width;
  std::cout << std::endl;

  double area { length * width };
  std::cout << "The area of rectangle of given dimensions is " << area << " sq. units" << std::endl;
  return 0;
}
