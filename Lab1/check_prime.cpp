#include <iostream>

int main () {
  unsigned int num {};

  std::cout << "Enter any number: ";
  std::cin >> num;

  if (num <= 1 || num % 2 == 0) {
    std::cout << "Not a prime" << std::endl;
  } else {
    for (unsigned int i {3}; i * i <= num; i += 2) {
      if (num % i == 0) {
        std::cout << "Not a prime"; << std::endl;
        break;
      }
    }
    std::cout << num << " is a prime number." << std::endl;
  }
  return 0;
}
