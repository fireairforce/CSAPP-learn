#include <iostream>
using namespace std;

void inplace_swap(int *x, int *y) {
  *y = *x ^ *y;
  *x = *x ^ *y;
  *y = *x ^ *y;
}

void reverse_array(int a[], int cnt) {
  int first, last;
  // 长度为奇数的时候中间元素回成为0
  for (first = 0, last = cnt - 1; first <= last; first++, last--)
  {
    inplace_swap(&a[first], &a[last]);
  }
}

int main() {
  int a[5] = {1, 2, 3, 4, 5};
  reverse_array(a, 5);
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", a[i]);
  }
  return 0;
}