#include <iostream>
using namespace std;

int main() {
  int i, a, b, c;
  int d, p;
  while (scanf("%d %d %d %d", &i, &a, &b, &c), (i || a || b || c)) {
    int p = i;
    int d = 0;

    // after 2 full clockwise turns
    d += 360 * 2;
    p = i;

    // stop at the first number
    if (p >= a) {
      d += 9 * (p - a);
    } else {
      d += 360 - (a - p) * 9;
    }
    p = a;

    // after 1 full counter-clockwise turns
    d += 360;

    // stop at the second number
    if (b >= p) {
      d += 9 * (b - p);
    } else {
      d += 360 - (p - b) * 9;
    }
    p = b;

    // stop at the first number
    if (p >= c) {
      d += 9 * (p - c);
    } else {
      d += 360 - (c - p) * 9;
    }
    p = c;

    printf("%d\n", d);
  }
}
