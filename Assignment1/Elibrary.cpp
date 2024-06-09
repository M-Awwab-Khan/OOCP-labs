#include <cstring>
#include "Elibrary.h"
using namespace std;

Elibrary::Elibrary() {

}


bool Elibrary::isDuplicate(const char* pubID) const {
    for (const auto& book : books) {
        if (strcmp(book.getPublicationID(), pubID) == 0) {
            return true;
        }
    }
    return false;
}

bool Elibrary::addBook(const char* pubID, const char* title, const char* author) {
    if (isDuplicate(pubID)) {
        return false;
    }

    Book newBook(pubID, title, author);
    books.push_back(newBook);
    return true;
}

bool Elibrary::editBook(const char* pubID, const char* newTitle, const char* newAuthor) {
    for (auto& book : books) {
        if (strcmp(book.getPublicationID(), pubID) == 0) {
            book.editDetails(newTitle, newAuthor);
            return true;
        }
    }
    return false;
}

bool Elibrary::deleteBook(const char* pubID) {
    // Use an iterator to find the book
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (strcmp(it->getPublicationID(), pubID) == 0) {
            books.erase(it);  // Erase the book from the vector using the iterator
            return true;  // Exit the function after deletion
        }
    }
    return false;
}

void Elibrary::displayAllBooks() const {
    if (books.empty()) {
        cout << "No books in the library.\n";
        return;
    }
    for (const auto& book : books) {
        book.displayBook();
        cout << "\n";
    }
}
