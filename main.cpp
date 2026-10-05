#include <iostream>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: string; 

// Lab 6 — Your Name
// CIS 5 Week 06 · Even and odd

int main() {
  int even = 0;
  int odd = 0;

  for (int i = 0; i <= 100; i = i +2) {
    even = even + i;
  }

  int j = 1;
  while (j <= 99) {
    odd = odd + j;
    j = j + 2; 
  }

  std :: cout << "Sum of even number (0-100): " << even;
  std :: cout << "Sum of odd number (1-99): " << odd;

  return 0;
}
