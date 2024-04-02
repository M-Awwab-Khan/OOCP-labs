#include <iostream>
#include <string>

int main() {
  unsigned int n {};
  std::cout << "Enter number of terms: ";
  std::cin >> n;

  unsigned int a {0};
  unsigned int b {1};
  unsigned int temp {};

  for (unsigned int i {1}; i <= n; ++i){
    std::cout << a << ' ';
    temp = b;
    b += a;
    a = temp;
  }

  return 0;
}
