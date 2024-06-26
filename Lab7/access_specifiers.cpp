#include <iostream>
using namespace std;

class Base {
private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar;
};

class Derived : public Base {
public:
    void accessMembers() {
        // privateVar = 1; // Not accessible
        protectedVar = 2; // Accessible
        publicVar = 3; // Accessible
    }

    void display() {
        cout << "Protected Var: " << protectedVar << endl;
        cout << "Public Var: " << publicVar << endl;
    }
};

int main() {
    Derived d;
    d.accessMembers();
    d.display();

    d.publicVar = 5; // Public member can be accessed directly
    // d.protectedVar = 4; // Not accessible directly
    d.display();

    return 0;
}
