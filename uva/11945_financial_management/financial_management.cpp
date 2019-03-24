#include <iostream>

using namespace std;

int main() {
  int n = 0;
  double buffer = 0.0, avg = 0.0, sum = 0.0;

  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    avg = 0.0;
    sum = 0.0;
    for (int i = 0; i < 12; i++) {
      scanf("%lf", &buffer);
      sum += buffer;
    }
    avg = sum / 12;
    long thousands = avg / 1000;
    long remain = long(avg) % 1000;
    printf("%d $", i + 1);
    if (thousands > 0) printf("%ld,", thousands);
    printf("%.2f\n", remain + avg - long(avg));
  }
  return 0;
}