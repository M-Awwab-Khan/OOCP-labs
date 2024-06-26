#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(const string& n, int a) : name(n), age(a) {}
};

class Student : public Person {
private:
    int studentID;

public:
    Student(const string& n, int a, int id) : Person(n, a), studentID(id) {}

    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Student ID: " << studentID << endl;
    }
};

int main() {
    Student s("M. Awwab Khan", 18, 23051);
    s.display();

    return 0;
}
