#include <iostream>
#include "ComboLock.h"
using namespace std;


int main() {

    // setting combolock password
    int s1, s2, s3;
    do {
     cout << "Enter 3 postive numbers between 0 and 39 to set combination: ";
      cin >> s1 >> s2 >> s3;

    } while ((s1 < 0 || s1 > 39) || (s2 < 0 || s2 > 39) || (s3 < 0 || s3 > 39));

    ComboLock cl(s1, s2, s3);

    cout << "Combination set successfully" << endl;

    while (true) {
      int choice;
      cout << "Enter 1 to turn right: " << endl;
      cout << "Enter 2 to turn left: " << endl;
      cout << "Enter 3 to reset: " << endl;
      cout << "Enter 4 to open: " << endl;
      cout << "Enter 5 to exit: " << endl;
      cout << "Enter your choice: ";
      cin >> choice;

      if (choice == 1) {
        int ticks;
        do {
          cout << "Enter positive number of ticks to turn right: ";
          cin >> ticks;
        } while (ticks < 0);

        cl.turnRight(ticks);
        cout << "Turned right by " << ticks << " ticks" << endl;
      } 
      else if (choice == 2) {
        int ticks;
        do {
          cout << "Enter positive number of ticks to turn left: ";
          cin >> ticks;
        } while (ticks < 0);

        cl.turnLeft(ticks);
        cout << "Turned left by " << ticks << " ticks" << endl;
      }

      else if (choice == 3) {
        cl.reset();
        cout << "Successfully reset the dial to 0" << endl;
      }

      else if (choice == 4) {
        cout << "Attempting to open...." << endl;
        if (cl.open()) {
          cout << "Successfully opened the lock." << endl;
          break;
        } else{
          cout << "Failed to open the lock. Invalid combination" << endl;
        }
      }

      else if (choice == 5) {
        cout << "Exiting...\n";
        break;
      }

      else{
        cout << "Invalid input. Try again\n";
      }
    
    }
    return 0;
}
