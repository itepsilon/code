# Fizz Buzz
## Problem Statement

Write a program that outputs the string representation of numbers from 1 to n. But for multiples of three it should output "Fizz" instead of the number and for the multiples of five output “Buzz”. For numbers which are multiples of both three and five output “FizzBuzz”.

### Input

n - integer

### Output

Return a list of string

## Solution I

### Explanation

We need to iterate through [1,n] and process each number to a string. If the number is divisible by 3, it becomes "Fizz". If the number is divisible by 5, it becomes "Buzz". If the number is divisible by both 3 and 5, it becomes "FizzBuzz". We need to check if the number is divisible by 15 first because a number that is divisible by 3 might be also divisible by 5 and a number that is divisible by 5 might be also divisible by 3.

### Implementation

```cpp
#include <string>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<string> fizzBuzz(int n) {
    vector<string> r;
    for (int i = 1; i <= n; i++) {
      if (i % 15 == 0) {
        r.push_back("FizzBuzz");
      } else if (i % 5 == 0) {
        r.push_back("Buzz");
      } else if (i % 3 == 0) {
        r.push_back("Fizz");
      } else {
        r.push_back(to_string(i));
      }
    }
    return r;
  }
};
```

### Time & Space complexity
* Time: O(n)
* Space: O(n)

