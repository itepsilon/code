#include <iostream>
using namespace std;

bool isPrime(n) {
  if (n == 2) {
    return true;
  }
  if (n % 2 == 0) {
    return false;
  }

  for (int i = 3; i < n; i += 2) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() { return 0; }