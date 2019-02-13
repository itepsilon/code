class Solution {
 public:
  int climbStairs(int n) {
    int pre = 0;
    int current = 1;
    while (n--) {
      current += pre;
      pre = current - pre;
    }
    return current;
  }
};