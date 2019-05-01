#include <iostream>
using namespace std;

int main() {
  int t, n, a;
  int min, max;
  scanf("%d", &t);
  while (t--) {
    min = 100;
    max = -1;
    scanf("%d", &n);
    while (n--) {
      scanf("%d", &a);
      if (a <= min) min = a;
      if (a >= max) max = a;
    }
    printf("%d\n", (max - min) << 1);
  }
  return 0;
}