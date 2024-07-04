#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
    string title;
    string author;
    int ISBN;

public:
    Book(string t, string a, int isbn) : title(t), author(a), ISBN(isbn) {}
    int getISBN() {
        return ISBN;
    }
    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
    }
};
class Library {
    vector<Book> books;

public:
    Library() {}
    void addBook(Book b) {
        books.push_back(b);
    }
    void displayBookDetail(int isbn) {
        for (auto &b : books) {
            if (b.getISBN() == isbn) {
                b.displayDetails();
                return;
            }
        }
        cout << "No Book found" << endl;
    }
};
int main() {
    Library l;
    Book b{"Limitless", "Jim Qwik", 12341};
    l.addBook(b);
    l.displayBookDetail(12341);
}