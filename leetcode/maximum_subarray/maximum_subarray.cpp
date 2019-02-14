#include <vector>
#include <algorithm>

using namespace std;

class Solution {
 public:
  int maxSubArray(vector<int>& nums) {
    if (nums.empty()) {
      return 0;
    }
    int local = nums[0];
    int global = nums[0];
    for(int i = 0; i < nums.size(); i++) {
      local = max(nums[i], nums[i] + local);
      if (local > global) {
        global = local;
      }
    }
    return global;
  }
};