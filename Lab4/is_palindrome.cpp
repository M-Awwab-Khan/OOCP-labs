#include <iostream>
using namespace std;

bool is_palindrome(string str) {
    char* l = &str[0];
    char* r = l + size(str) - 1;

    while (l < r){
        if (*l != *r) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    string str = "level";
    cout << boolalpha;
    cout << "is " << str << " a palindrome: " << is_palindrome(str) << endl;
    return 0;
}
