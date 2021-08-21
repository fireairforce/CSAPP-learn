#include<iostream>
using namespace std;
int isTmax (int x) {
  int i = !(~((x + 1) ^ x));
  int j = !!(x + 1);
  return i & j;
}

int allOddBits(int x) {
  while (x & 1 && x < 0) {
    x = x >> 2;
  }
  if (x== 0) {
    return 1;
  }
  return 0;
}

int main () {
  cout << ~1 + 1 << endl;
  cout << isTmax(7) << endl;
  return 0;
}