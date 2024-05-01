#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    string genre;
    int yearOfPublication;
};

int main() {
    Book books[3];
    for (int i = 0; i < 3; ++i) {
        cout << "Enter details for Book " << i + 1 << ":" << endl;
        cout << "Title: ";
        getline(cin, books[i].title);
        cout << "Author: ";
        getline(cin, books[i].author);
        cout << "Genre: ";
        getline(cin, books[i].genre);
        cout << "Year of Publication: ";
        cin >> books[i].yearOfPublication;
        cin.ignore();
    }

    cout << "\nDetails of all books:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "Book " << i + 1 << " details:" << endl;
        cout << "Title: " << books[i].title << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "Genre: " << books[i].genre << endl;
        cout << "Year of Publication: " << books[i].yearOfPublication << endl;
        cout << endl;
    }

    Book earliestBook = books[0];
    for (size_t i = 0; i < size(books); i++) {
        if (books[i].yearOfPublication < earliestBook.yearOfPublication) {
            earliestBook = books[i];
        }
    }
    

    cout << "Book with the earliest publication year:" << endl;
    cout << "Title: " << earliestBook.title << endl;
    cout << "Author: " << earliestBook.author << endl;
    cout << "Genre: " << earliestBook.genre << endl;
    cout << "Year of Publication: " << earliestBook.yearOfPublication << endl;

    return 0;
}
