#include <iostream>

int main () {

  long int seconds {};
  std::cout << "Enter time in seconds: ";
  std::cin >> seconds;

  std::cout << "Hours: " << seconds / 3600 << " hrs" << std::endl;
  std::cout << "Minutes: " << (seconds % 3600) / 60 << " mins" << std::endl;
  std::cout << "Seconds: " << seconds % 60 << " sec" << std::endl;

  return 0;
}
