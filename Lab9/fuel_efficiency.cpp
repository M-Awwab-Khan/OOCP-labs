#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
public:
    virtual double fuelEfficiency() = 0;
};
class Car : public Vehicle
{
private:
    double kilometersDriven;
    double fuelConsumed;

public:
    Car(double k, double f) : kilometersDriven(k), fuelConsumed(f) {}
    double fuelEfficiency() override
    {
        return fuelConsumed / kilometersDriven;
    }
};
class Truck : public Vehicle
{
private:
    double kilometersDriven;
    double fuelConsumed;

public:
    Truck(double k, double f) : kilometersDriven(k), fuelConsumed(f) {}
    double fuelEfficiency() override
    {
        return fuelConsumed / kilometersDriven;
    }
};

int main()
{
    Car c(1000, 100);
    Truck t(2000, 1000);
    cout << "Efficiency of Car: " << c.fuelEfficiency() << endl;
    cout << "Efficiency of Truck: " << t.fuelEfficiency() << endl;
    return 0;
}
