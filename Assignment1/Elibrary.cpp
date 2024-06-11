#include <cstring>
#include "Elibrary.h"
#include <memory>
#include <iostream>
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

bool Elibrary::addSubscriberToBook(const char* pubID, const char* subscriber) {
    auto bookPtr = findBook(pubID);
    if (bookPtr) {
        bookPtr->addSubscriber(subscriber);
        return true;
    } else {
        return false;
    }
}

bool Elibrary::removeSubscriberFromBook(const char* pubID, const char* subscriber) {
    auto bookPtr = findBook(pubID);
    if (bookPtr) {
        bookPtr->removeSubscriber(subscriber);
        return true;
    } else {
        return false;
    }
}

bool Elibrary::deleteBook(const char* pubID) {
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (strcmp(it->getPublicationID(), pubID) == 0) {
            books.erase(it); 
            return true; 
        }
    }
    return false;
}

shared_ptr<Book> Elibrary::findBook(const char* pubID) {
        for (auto& book: books) {
            if (strcmp(pubID, book.getPublicationID()) == 0) {
                return make_shared<Book>(book);
            }
        }
        return nullptr;
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
