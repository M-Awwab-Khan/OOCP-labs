#include <iostream>

class Car {
private:
    std::string brand;
    std::string model;
    int year;
public:
    Car(const std::string& b, const std::string& m, int y) : brand(b), model(m), year(y) {}

    void displayDetails() {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year: " << year << std::endl;
    }
};

int main() {
     Car car("Toyota", "Camry", 2020);
    car.displayDetails();

    return 0;
}