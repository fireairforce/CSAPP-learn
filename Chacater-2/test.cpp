#include<iostream>
using namespace std;
int isTmax (int x) {
  int i = !(~((x + 1) ^ x));
  int j = !!(x + 1);
  return i & j;
}
int main () {
  cout << ~1 + 1 << endl;
  cout << isTmax(7) << endl;
  return 0;
}