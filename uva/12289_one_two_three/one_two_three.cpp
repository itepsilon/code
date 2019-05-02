#include <iostream>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n;
  while (n--) {
    cin >> s;
    if (s.length() == 5) {
      cout << 3 << endl;
    } else {
      int diff1 = 0;
      if (s[0] != 'o') {
        diff1++;
      }
      if (s[1] != 'n') {
        diff1++;
      }
      if (s[2] != 'e') {
        diff1++;
      }

      int diff2 = 0;
      if (s[0] != 't') {
        diff2++;
      }
      if (s[1] != 'w') {
        diff2++;
      }
      if (s[3] != 'o') {
        diff2++;
      }

      if (diff1 < diff2) {
        cout << 1 << endl;
      } else {
        cout << 2 << endl;
      }
    }
  }

  return 0;
}