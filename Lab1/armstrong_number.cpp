#include <iostream>
#include <cmath>

int main() {

  int num {};
  std::cout << "Enter any number: ";
  std::cin >> num;

  int n_digits {std::floor(std::log10(num) + 1)};
  int temp {num};
  int sum {0};
  while (temp > 10) {
    int digit {temp % 10};
    temp = temp / 10;
    sum += std::pow(digit, n_digits);
  }
  sum += std::pow(temp, n_digits);
  
  if (num == sum) {
    std::cout << num << " is an armstrong number." << std::endl;
  } else {
    std::cout << num << " is not an armstrong number." << std::endl;
  }

  return 0;
}
