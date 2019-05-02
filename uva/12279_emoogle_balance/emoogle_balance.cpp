#include <iostream>
using namespace std;

int main() {
  int N, event;
  int result;
  int test = 1;
  while (scanf("%d", &N), N) {
    result = 0;
    while (N--) {
      scanf("%d", &event);
      if (event > 0) {
        result += 1;
      } else {
        result -= 1;
      }
    }
    printf("Case %d: %d\n", test, result);
    test++;
  }

  return 0;
}