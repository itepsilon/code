#include <iostream>
using namespace std;
int main() {
  string s;
  int i = 1;
  while (getline(cin, s)) {
    if (s == "#") break;
    if (s == "HELLO") {
      cout << "Case " << i << ": "
           << "ENGLISH" << endl;
    } else if (s == "HOLA") {
      cout << "Case " << i << ": "
           << "SPANISH" << endl;
    } else if (s == "HALLO") {
      cout << "Case " << i << ": "
           << "GERMAN" << endl;
    } else if (s == "BONJOUR") {
      cout << "Case " << i << ": "
           << "FRENCH" << endl;
    } else if (s == "CIAO") {
      cout << "Case " << i << ": "
           << "ITALIAN" << endl;
    } else if (s == "ZDRAVSTVUJTE") {
      cout << "Case " << i << ": "
           << "RUSSIAN" << endl;
    } else {
      cout << "Case " << i << ": "
           << "UNKNOWN" << endl;
    }
    i++;
  }
  return 0;
}