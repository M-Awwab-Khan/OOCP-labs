#include <iostream>

int main() {
  
  float a {};
  float b {};

  std::cout << "Enter two numbers: ";
  std::cin >> a >> b;

  float sum {a + b};
  float avg {sum / 2};

  std::cout << "Sum: " << sum << std::endl;
  std::cout << "Average: " << avg << std::endl;

  return 0;
}
