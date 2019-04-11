#include <iostream>

using namespace std;

int main() {
  int N, a, b, digit, test, power10;
  cin >> test;
  for (int i = 0; i < test; i++) {
    cin >> N;
    a = 0;
    b = 0;
    power10 = 1;
    while (N > 0) {
      digit = N % 10;
      if (digit == 4) {
        a = 2 * power10 + a;
        b = 2 * power10 + b;
      } else {
        a = digit * power10 + a;
      }
      N /= 10;
      power10 *= 10;
    }
    cout << "Case #" << i + 1 << ": " << a << " " << b << endl;
  }
}