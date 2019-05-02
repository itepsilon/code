#include <iostream>
using namespace std;
int main() {
  string s;
  int i = 1;
  while (getline(cin, s), s != "*") {
    if (s == "Hajj") {
      printf("Case %d: Hajj-e-Akbar\n", i);
    } else {
      printf("Case %d: Hajj-e-Asghar\n", i);
    }
    i++;
  }
  return 0;
}