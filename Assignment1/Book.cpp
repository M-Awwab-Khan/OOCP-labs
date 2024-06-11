#include <cstring>
#include <iostream>
#include "Book.h"
using namespace std;

// The constructor
Book::Book(const char* pubID, const char* t, const char* a)
{
    strcpy(publicationID, pubID);
    strcpy(title, t);
    strcpy(author, a);
}

// Getter for Publication ID
const char* Book::getPublicationID() const {
    return publicationID;
}

// Edit book details
void Book::editDetails(const char* newTitle, const char* newAuthor) {
    strcpy(title, newTitle);
    strcpy(author, newAuthor);
}

// Add a subscriber to the list
void Book::addSubscriber(const char* subscriber) {
    char* sub = new char[strlen(subscriber) + 1];
    strcpy(sub, subscriber);
    patronSubscribers.push_back(sub);
}

// Remove a subscriber from the list
void Book::removeSubscriber(const char* subscriber) {
    for (auto it = patronSubscribers.begin(); it != patronSubscribers.end(); ++it) {
        if (strcmp(*it, subscriber) == 0) {
            delete[] *it;  // Free the allocated memory for the subscriber
            patronSubscribers.erase(it);  // Remove the pointer from the vector
            break;  // Exit the loop after the subscriber is removed
        }
    }
}

// Display book details and subscribers
void Book::displayBook() const {
    cout << "Publication ID: " << publicationID << "\n";
    cout << "Title: " << title << "\n";
    cout << "Author: " << author << "\n";
    cout << "Patron Subscribers: ";
    for (auto& sub: patronSubscribers) {
        cout << sub << "\t";
    }
    cout << "\n";
}

// The destrcturor (deleting each of the subscriber from dynamic memory)
Book::~Book()
{
    for (auto& sub : patronSubscribers) {
        delete[] sub;
    }
}
