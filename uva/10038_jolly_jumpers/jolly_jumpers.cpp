#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, num;
  vector<int> v;
  vector<bool> c;
  while (scanf("%d", &n) != EOF) {
    v.clear();
    c.clear();
    for (int i = 0; i < n; i++) {
      cin >> num;
      v.push_back(num);
      c.push_back(false);
    }
    for (int i = 0; i < n - 1; i++) {
      int val = abs(v[i] - v[i + 1]);
      if (val >= 1 && val <= n - 1) {
        c[val] = true;
      }
    }
    bool result = true;
    for (int i = 1; i < n; i++) {
      if (!c[i]) {
        result = false;
      }
    }
    if (result) {
      cout << "Jolly" << endl;
    } else {
      cout << "Not jolly" << endl;
    }
  }
  return 0;
}