#include <string>
#include "ComboLock.h"
using namespace std;

ComboLock::ComboLock(int s1, int s2, int s3){
  secret1 = s1;
  secret2 = s2;
  secret3 = s3;
  dial = 0;
}

void ComboLock::reset() {
  dialHistory.clear();
  dial = 0;
}

void ComboLock::turnRight(int ticks) {
  dial = (dial - ticks) % 40;
  if (dial < 0) {
      dial += 40;
  }
  dialHistory.push_back(to_string(dial) + "r");
}

void ComboLock::turnLeft(int ticks) {
  dial += ticks;
  dial %= 40;
  
  dialHistory.push_back(to_string(dial) + "l");
}

bool ComboLock::open() {
  bool d1 = dialHistory[0] == (to_string(secret1) + "r");
  bool d2 = dialHistory[1] == (to_string(secret2) + "l");
  bool d3 = dialHistory[2] == (to_string(secret3) + "r");

  if (d1 && d2 && d3) {
    return true;
  } else{
    return false;
  }
}
