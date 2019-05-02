#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, total = 0;
  int amount;
  string query;
  cin >> n;
  while (n--) {
    cin >> query;
    if (query == "donate") {
      cin >> amount;
      total += amount;
    } else if (query == "report") {
      cout << total << endl;
    }
  }

  return 0;
}