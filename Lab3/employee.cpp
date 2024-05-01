#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int employeeID;
    string name;
    string department;
    float salary;
};

int main() {
    Employee employees[5];
    float totalSalary = 0;

    for (int i = 0; i < 5; ++i) {
        cout << "Enter details for Employee " << i + 1 << ":" << endl;
        cout << "Employee ID: ";
        cin >> employees[i].employeeID;
        cout << "Name: ";
        cin.ignore(); 
        getline(cin, employees[i].name);
        cout << "Department: ";
        getline(cin, employees[i].department);
        cout << "Salary: ";
        cin >> employees[i].salary;

        totalSalary += employees[i].salary;
    }

    cout << "\nDetails of all employees:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Employee " << i + 1 << " details:" << endl;
        cout << "Employee ID: " << employees[i].employeeID << endl;
        cout << "Name: " << employees[i].name << endl;
        cout << "Department: " << employees[i].department << endl;
        cout << "Salary: " << employees[i].salary << endl;
        cout << endl;
    }

    float averageSalary = totalSalary / 5;
    cout << "Average Salary of all employees: " << averageSalary << endl;
    
    return 0;
}
