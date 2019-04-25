#include <iostream>
#include <vector>

using namespace std;
const int N = 10000;

int f[N], r[N];
vector<int> a[N];

void DFS(int u, int dep) {
  r[u] = dep;
  for (vector<int>::iterator it = a[u].begin(); it != a[u].end(); it++) {
    DFS(*it, dep + 1);
  }
}

int main() {
  int test, n, parent, child;
  cin >> test;
  for (int t = 0; t < test; t++) {
    cin >> n;
    for (int i = 0; i < n; i++) {
      a[i].clear();
    }
    memset(f, 255, sizeof(f));
    for (int i = 0; i < n - 1; i++) {
      cin >> parent >> child;
      a[parent - 1].push_back(child - 1);
      f[child - 1] = parent - 1;
    }
    int root = 0;
    while (f[root] >= 0) root++;
    DFS(root, 0);
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    while (x != y) {
      if (r[x] > r[y]) {
        x = f[x];
      } else {
        y = f[y];
      }
    }
    cout << x + 1 << endl;
  }
  return 0;
}