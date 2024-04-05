#include <iostream>

int main () {

  long int seconds {};
  std::cout << "Enter time in seconds: ";
  std::cin >> seconds;

  std::cout << "Time in minutes: " << seconds / 60.0 << " mins" << std::endl;
  std::cout << "Time in hours: " << seconds / 3600.0 << " hrs" << std::endl;
  return 0;
}
