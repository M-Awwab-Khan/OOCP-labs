#ifndef ELIBRARY_H
#define ELIBRARY_H
#include <vector>
#include "Book.h"
#include <memory>
using namespace std;


class Elibrary
{
private:
    vector<Book> books;
    bool isDuplicate(const char* pubID) const;
    

public:
    Elibrary();
    Book* findBook(const char* pubID);
    bool addBook(const char* pubID, const char* title, const char* author);
    bool editBook(const char* pubID, const char* newTitle, const char* newAuthor);
    bool deleteBook(const char* pubID);
    bool addSubscriberToBook(const char* pubID, const char* subscriber);
    bool removeSubscriberFromBook(const char* pubID, const char* subscriber);
    void displayAllBooks() const;
};

#endif
