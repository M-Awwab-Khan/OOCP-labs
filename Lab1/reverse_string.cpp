#include <iostream>
#include <string>
#include <algorithm>


int main() {
  
  std::string input {};

  std::cout << "Enter any string: ";
  std::getline(std::cin, input);


  int l { 0 };
  int r { input.length() - 1 };


  while (l < r) {
    std::swap(input[l], input[r]);
    l += 1;
    r -= 1;
  }

  std::cout << "The reversed string is " << input << std::endl;

  return 0;
}
