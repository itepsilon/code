#include <iostream>

using namespace std;

int main() {
  int a[20];
  int n = 0;
  int count = 0;
  while(1) {
    n = 0;
    count = 0;
    cin >> a[n];
    if(a[n] == -1) break;
    while(a[n] != 0) {
      cin >> a[++n];
    }
    for(int i = 0; i < n - 1; i++) {
      for(int j = i + 1; j < n; j++) {
        if(a[i] == a[j] * 2 || a[j] == a[i] * 2) {
          count++;
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}