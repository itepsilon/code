#include <iostream>
using namespace std;

int main() {
  int T;
  int l, w, h;
  cin >> T;
  for (int i = 1; i <= T; i++) {
    cin >> l >> w >> h;
    if (l <= 20 && w <= 20 && h <= 20) {
      printf("Case %d: good\n", i);
    } else {
      printf("Case %d: bad\n", i);
    }
  }

  return 0;
}