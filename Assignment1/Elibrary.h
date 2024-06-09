#ifndef ELIBRARY_H
#define ELIBRARY_H
#include <vector>
#include "Book.h"
using namespace std;


class Elibrary
{
private:
    vector<Book> books;
    bool isDuplicate(const char* pubID) const;


public:
    Elibrary();
    bool addBook(const char* pubID, const char* title, const char* author);
    bool editBook(const char* pubID, const char* newTitle, const char* newAuthor);
    bool deleteBook(const char* pubID);
    void displayAllBooks() const;
};

#endif
