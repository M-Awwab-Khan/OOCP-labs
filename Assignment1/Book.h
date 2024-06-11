#ifndef BOOK_H
#define BOOK_H
#include <vector>
#include <cstring>
using namespace std; 

class Book
{
private:
    char publicationID[20];
    char title[100];
    char author[100];
    vector<char*> patronSubscribers;
    

public:
    Book(const char* pubID, const char* t, const char* a);
    ~Book();
    bool operator==(const Book& other) const {
        return strcmp(getPublicationID(), other.getPublicationID()) == 0;
    }
    const char* getPublicationID() const;
    void editDetails(const char* newTitle, const char* newAuthor);
    void addSubscriber(const char* subscriber);
    void removeSubscriber(const char* subscriber);
    void displayBook() const;
};




#endif
