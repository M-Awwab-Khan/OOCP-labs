#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    virtual double calculateSalary() = 0;
};
class PermanentEmployee : public Employee
{
private:
    double salary;

public:
    PermanentEmployee(double s) : salary(s) {}
    double calculateSalary() override
    {
        if (salary <= 100000)
        {
            return salary - (salary * 0.02);
        }
        else if (salary <= 300000)
        {
            return salary - (salary * 0.05);
        }
        return salary - (salary * 0.1);
    }
};
class ContractEmployee : public Employee
{
private:
    double salary;

public:
    ContractEmployee(double s) : salary(s) {}
    double calculateSalary() override
    {
        return salary - 200;
    }
};

int main()
{
    PermanentEmployee p(200000);
    ContractEmployee c(100000);
    cout << p.calculateSalary() << endl;
    cout << c.calculateSalary() << endl;
    return 0;
}
