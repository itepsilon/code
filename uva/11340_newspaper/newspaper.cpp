#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N, K, price, lines, result;
  char ch;
  string line;
  scanf("%d", &N);
  while (N--) {
    scanf("%d", &K);
    getchar();
    vector<int> cost(256, 0);
    vector<int> count(256, 0);
    while (K--) {
      scanf("%c %d", &ch, &price);
      getchar();
      cost[ch] = price;
    }
    scanf("%d", &lines);
    getchar();
    while (lines--) {
      getline(cin, line);
      for (int i = 0; i < line.length(); i++) {
        count[line[i]] += 1;
      }
    }
    result = 0;
    for (int i = 0; i < 256; i++) {
      result += count[i] * cost[i];
    }
    printf("%.2lf$\n", result / 100.0);
  }
  return 0;
}