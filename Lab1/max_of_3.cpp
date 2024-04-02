#include <iostream>
#include <string>

int main() {
  
  int a {};
  int b {};
  int c {};

  std::cout << "Enter three numbers: ";
  std::cin >> a >> b >> c;
  
  if (a > b && a > c) {
    std::cout << a << " is the largest" << std::endl;
  } else if (b > a && b > c) {
    std::cout << b << " is the largest" << std::endl;
  } else {
    std::cout << c << " is the largest" << std::endl;
  }
  
  return 0;
}
