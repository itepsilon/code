#include <math.h>
#include <iostream>
#define M_PI 3.14159265358979323846264338327950288

using namespace std;

int main() {
  int t, years;
  double x, y;
  scanf("%d", &t);
  for (int i = 1; i <= t; i++) {
    scanf("%lf %lf", &x, &y);
    years = ceil((x * x + y * y) * M_PI / 2 / 50);
    printf("Property %d: This property will begin eroding in year %d.\n", i,
           years);
  }
  printf("END OF OUTPUT.\n");
  return 0;
}