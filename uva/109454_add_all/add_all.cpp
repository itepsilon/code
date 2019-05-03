#include <functional>
#include <iostream>
#include <queue>
using namespace std;

int main() {
  int element, N, first, second;
  priority_queue<int, vector<int>, greater<int> > pq;
  while (scanf("%d", &N), N) {
    for (int i = 0; i < N; i++) {
      scanf("%d", &element);
      pq.push(element);
    }
    int cost = 0;
    while (pq.size() > 1) {
      first = pq.top();
      pq.pop();
      second = pq.top();
      pq.pop();
      cost += first + second;
      pq.push(first + second);
    }
    pq.pop();
    printf("%d\n", cost);
  }
  return 0;
}