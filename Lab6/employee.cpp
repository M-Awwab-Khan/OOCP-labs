#include <iostream>

class Employee {
private:
    std::string name;
    double salary;
public:
    Employee(const std::string& n, double s) : name(n), salary(s) {}

    void displayDetails() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Salary: $" << salary << std::endl;
    }
};

int main() {
    Employee emp("Muhammad Awwab Khan", 150000);
    emp.displayDetails();
    return 0;
}