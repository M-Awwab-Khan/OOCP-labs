#include <iostream>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolder;
    double balance;
public:
    BankAccount(const std::string& num, const std::string& holder, double bal) : 
        accountNumber(num), accountHolder(holder), balance(bal) {}

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            std::cout << "Insufficient balance." << std::endl;
        }
    }
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc("123456789", "Awwab", 1000);
    acc.deposit(500);
    acc.withdraw(200);
    std::cout << "Account Balance: $" << acc.getBalance() << std::endl;
    return 0;
}