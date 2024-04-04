#include <iostream>

int main() {
  
  unsigned int num {};
  std::cout << "Enter any number: ";
  std::cin >> num;

  if (num <= 1){
    std::cout << "Factorial of " << num << " is 1" << std::endl;
  } else {
    unsigned int fact {1};
    for (unsigned int i {1}; i <= num; ++i) {
      fact *= i;
    }
    std::cout << "Factorial of " << num << " is " << fact << std::endl;
  }

  return 0;
}
