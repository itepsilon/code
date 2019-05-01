#include <math.h>
#include <iostream>
using namespace std;

int main() {
  int t;
  int n, m;
  scanf("%d", &t);
  while (t--) {
    scanf("%d %d", &n, &m);
    printf("%d\n", (int)(ceil((n - 2) / 3.0) * ceil((m - 2) / 3.0)));
  }
  return 0;
}