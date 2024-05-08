#include <iostream>
using namespace std;

void swap_values(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {

  int a = 10;
  int b = 5;

  cout << "a = " << a << "  " << "b = " << b << endl;

  swap_values(&a, &b);

  cout << "a = " << a << "  " << "b = " << b << endl;

  return 0;
}
