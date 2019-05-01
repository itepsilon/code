#include <iostream>
using namespace std;

int main() {
  bool matched = true;
  char ch;
  while (scanf("%c", &ch) != EOF) {
    if (ch == '"') {
      if (matched) {
        printf("``");
      } else {
        printf("''");
      }
      matched = !matched;
    } else {
      printf("%c", ch);
    }
  }
  return 0;
}