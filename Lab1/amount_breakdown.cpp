#include <iostream>

int main() {
    int amount {};

    std::cout << "Enter the amount in rupees: ";
    std::cin >> amount;

    int thousands = amount / 1000;
    int fiveHundreds = (amount % 1000) / 500;
    int hundreds = ((amount % 1000) % 500) / 100;
    int fifties = (((amount % 1000) % 500) % 100) / 50;
    int tens = ((((amount % 1000) % 500) % 100) % 50) / 10;
    int fives = (((((amount % 1000) % 500) % 100) % 50) % 10) / 5;
    int twos = ((((((amount % 1000) % 500) % 100) % 50) % 10) % 5) / 2;
    int ones = (((((((amount % 1000) % 500) % 100) % 50) % 10) % 5) % 2) / 1;

    std::cout << "Denominations:" << std::endl;
    std::cout << "1000s: " << thousands << std::endl;
    std::cout << "500s: " << fiveHundreds << std::endl;
    std::cout << "100s: " << hundreds << std::endl;
    std::cout << "50s: " << fifties << std::endl;
    std::cout << "10s: " << tens << std::endl;
    std::cout << "5s: " << fives << std::endl;
    std::cout << "2s: " << twos << std::endl;
    std::cout << "1s: " << ones << std::endl;

    return 0;
}

