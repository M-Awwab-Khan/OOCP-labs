#include <iostream>
#include <string>
using namespace std;

class ComboLock{
    private:
    int s1, s2, s3;
    int digits[3] {};

    public:
    ComboLock(int secret1, int secret2, int secret3) : s1(secret1), s2(secret2), s3(secret3) {}
    void reset() {
        for (int i = 0; i < 3; i++) {
            digits[i] = 0;
        }
    }
    void turnLeft(int digit, int ticks) {
        digits[digit] = (digits[digit] - ticks) % 10;
    }

    void turnRight(int digit, int ticks) {
        digits[digit] = (digits[digit] + ticks) % 10;
    }

    bool open() {
        if (digits[0] == s1 && digits[1] == s2 && digits[2] == s3) {
            return true;
        } else {
            return false;
        }
    } 
};

int main() {

    ComboLock cl(7, 8, 6);
    cl.turnRight(0, 7);
    cl.turnRight(1, 8);
    cl.turnRight(2, 6);
    cl.turnLeft(2, 3);
    cout << boolalpha;
    cout << "Is the lock opened: " << cl.open() << endl;

    return 0;
}