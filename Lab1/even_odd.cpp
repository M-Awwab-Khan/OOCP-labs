#include <iostream>
#include <string>

int main () {
  int number {};
  std::cout << "Please enter a number: ";
  std::cin >> number;

  std::string result = number % 2 == 0 ? "It is an even number" : "It is an odd number";
  std::cout << result << std::endl;
  
  return 0;
}
