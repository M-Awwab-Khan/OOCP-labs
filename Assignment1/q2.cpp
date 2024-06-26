#include <iostream>
#include "Elibrary.h"
#include <cstring>
#include "Book.h"

int main() {
    Elibrary library;
    char choice;
    do {
        cout << "Menu:\n";
        cout << "a. Add A New Book\n";
        cout << "b. Edit Details of an Available Book\n";
        cout << "c. Delete A Book\n";
        cout << "d. Display All Books in the Library\n";
        cout << "e. Add Subscriber to a Book\n";
        cout << "f. Remove Subscriber from a Book\n";
        cout << "g. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "\n";
        
        switch (choice) {
            case 'a':
              {
                char pubID[20], title[100], author[100];
                cout << "Enter Publication ID: ";
                cin >> pubID;
                cout << "Enter Title: ";
                cin.ignore();
                cin.getline(title, 100);
                cout << "Enter Author: ";
                cin.getline(author, 100);

                bool response = library.addBook(pubID, title, author);
                if (!response) {
                    cout << "Book with this publication id already exists :|\n";
                } else {
                    cout << "Successfullly added the book\n";
                }
                break;
              }

            case 'b':
              {
                char pubID[20], newTitle[100], newAuthor[100];
                cout << "Enter Publication ID: ";
                cin >> pubID;
                cout << "Enter New Title: ";
                cin.ignore();
                cin.getline(newTitle, 100);
                cout << "Enter New Author: ";
                cin.getline(newAuthor, 100);


                bool response = library.editBook(pubID, newTitle , newAuthor);
                if (!response) {
                    cout << "Failed to edit the book :(\n";
                } else {
                    cout << "Book Details Updated! :)\n";
                }
                break;
              }

            case 'c':
              {
                char pubID[20];
                cout << "Enter Publication ID of the book: ";
                cin >> pubID;

                bool response = library.deleteBook(pubID);
                if (!response) {
                    cout << "Book not found :(\n";
                } else {
                    cout << "Book Deleted Successfullly :)\n";
                }
                break;


              }
            case 'd':
                library.displayAllBooks();
                break;

            case 'e':
              {
                char pubID[20], subscriber[100];
                cout << "Enter Publication ID of the book: ";
                cin >> pubID;
                cout << "Enter Subscriber Name: ";
                cin.ignore();
                cin.getline(subscriber, 100);
                bool response = library.addSubscriberToBook(pubID, subscriber);
                if (response) {
                  cout << "Subscriber added :)\n";
                } else {
                  cout << "Book not found :(\n";
                }
                break;
              }

            case 'f':
              {
                char pubID[20], subscriber[100];
                cout << "Enter Publication ID of the book: ";
                cin >> pubID;
                cout << "Enter Subscriber Name: ";
                cin.ignore();
                cin.getline(subscriber, 100);
                bool response = library.removeSubscriberFromBook(pubID, subscriber);
                if (response) {
                  cout << "Subscriber removed :(\n";
                } else {
                  cout << "Book not found :)\n";
                }
                break;
              }
            case 'g':
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 'g');
    
    return 0;
}
