#include <iostream>
#include <string>

struct Person {
  std::string name;
  int age;
};

int main() {
  Person p1 {"Awwab", 18};
  std::cout << "Name: " << p1.name << std::endl;
  std::cout << "Age: " << p1.age << std::endl;

  return 0;
}
