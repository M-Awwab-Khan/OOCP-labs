#include <iostream>
#include <string>
using namespace std;

struct Product {
    string productName;
    float price;
    int quantity;
};

int main() {
    Product product;

    cout << "Enter product name: ";
    getline(cin, product.productName);
    cout << "Enter price: ";
    cin >> product.price;
    cout << "Enter quantity: ";
    cin >> product.quantity;

    float totalCost = product.price * product.quantity;
    cout << "Total cost: " << totalCost << endl;
    return 0;
}
