#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n) {
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

int main() {
  vector<int> primes;
  const int N = 10001;
  for (int i = 2; i < N; i++) {
    if (isPrime(i)) primes.push_back(i);
  }

  int n, s, r;
  while (1) {
    scanf("%d", &n);
    if (n == 0) break;
    r = 0;
    for (int i = 0; i < primes.size() && primes[i] <= n; i++) {
      s = 0;
      for (int j = i; s < n; j++) {
        s += primes[j];
        if (s == n) {
          r += 1;
        }
      }
    }
    printf("%d\n", r);
  }

  return 0;
}