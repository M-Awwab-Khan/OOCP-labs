#ifndef COMBOLOCK_H
#define COMBOLOCK_H

#include <vector>
#include <string>
using namespace std;

class ComboLock{
  private:
  int secret1;
  int secret2;
  int secret3;

  public:
  vector<string> dialHistory;
  int dial;

  ComboLock(int s1, int s2, int s3);
  void reset();
  void turnRight(int ticks);
  void turnLeft(int ticks);
  bool open();

};

#endif
