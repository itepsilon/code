#include <iostream>
using namespace std;
int main() {
  int n;
  int a, b, c;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    scanf("%d %d %d", &a, &b, &c);
    if ((a <= b && b <= c) || (c <= b && b <= a)) {
      printf("Case %d: %d\n", i, b);
    } else if ((b <= a && a <= c) || (c <= a && a <= b)) {
      printf("Case %d: %d\n", i, a);
    } else {
      printf("Case %d: %d\n", i, c);
    }
  }
  return 0;
}