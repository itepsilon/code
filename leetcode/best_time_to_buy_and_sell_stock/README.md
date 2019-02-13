# Best Time to Buy and Sell Stock
## Problem Statement

Say you have an array for which the i-th element is the price of a given stock on day i. If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit. Note that you cannot sell a stock before you buy one.

### Input

a list of integers representing prices for each day.

### Output

Return an integer that is the maximum profit.

## Solution I

### Explanation

For this problem, we need to keep track on current minimum price & maximum profit when we iterate through prices from the beginning.

### Implementation

```cpp
#include <limits>
#include <vector>

using namespace std;

class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    int maxProfit = 0;
    int minPrice = INT_MAX;
    for (int i = 0; i < prices.size(); i++) {
      if (prices[i] < minPrice) {
        minPrice = prices[i];
      } else if (prices[i] - minPrice > maxProfit) {
        maxProfit = prices[i] - minPrice;
      }
    }
    return maxProfit;
  }
};
```

### Time & Space complexity
* Time: O(n)
* Space: O(1)




