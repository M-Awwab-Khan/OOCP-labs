#include <iostream>

int main () {
  
  int number {};
  std::cout << "Enter any 2 digit number: ";
  std::cin >> number;

  int reversed {(10 * (number % 10)) + number / 10};
  std::cout << "Reversed: " << reversed << std::endl;
  return 0;
}
