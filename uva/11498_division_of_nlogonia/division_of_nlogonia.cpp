#include <iostream>
using namespace std;

int main() {
  int K, N, M;
  int x, y;
  while (scanf("%d", &K), K) {
    scanf("%d %d", &N, &M);
    while (K--) {
      scanf("%d %d", &x, &y);
      if (x == N || y == M) {
        printf("divisa\n");
      } else if (x < N && y > M) {
        printf("NO\n");
      } else if (x > N && y > M) {
        printf("NE\n");
      } else if (x < N && y < M) {
        printf("SO\n");
      } else {
        printf("SE\n");
      }
    }
  }
}