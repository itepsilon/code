#include <iostream>
using namespace std;

int main() {
  int t, N;
  char c;
  cin >> t;
  cin.get(c);
  for (int i = 1; i <= t; i++) {
    cin >> N;
    cin.get(c);
    cout << "Case #" << i << ": ";
    while (cin.get(c)) {
      if (c == 'E') {
        cout << 'S';
      } else if (c == 'S') {
        cout << 'E';
      } else {
        break;
      }
    }
    cout << endl;
  }
  return 0;
}