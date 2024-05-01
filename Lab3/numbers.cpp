#include <iostream>

struct Number {
    int num;
};

void swapNumbers(Number& num1, Number& num2) {
    int temp = num1.num;
    num1.num = num2.num;
    num2.num = temp;
}

int main() {
    Number num1, num2;

    std::cout << "Enter the value for the first number: ";
    std::cin >> num1.num;

    std::cout << "Enter the value for the second number: ";
    std::cin >> num2.num;

    std::cout << "Original values:" << std::endl;
    std::cout << "First number: " << num1.num << std::endl;
    std::cout << "Second number: " << num2.num << std::endl;

    swapNumbers(num1, num2);

    std::cout << "\nSwapped values:" << std::endl;
    std::cout << "First number: " << num1.num << std::endl;
    std::cout << "Second number: " << num2.num << std::endl;

    return 0;
}
