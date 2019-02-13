#include <string>
#include <vector>

using namespace std;
class Solution {
 public:
  int rob(vector<int>& nums) {
    if (nums.empty()) return 0;
    if (nums.size() == 1) return nums[0];
    if (nums.size() == 2) return max(nums[0], nums[1]);

    int pre = nums[0];
    int current = max(nums[0], nums[1]);

    for (int i = 2; i < nums.size(); i++) {
      int temp = max(pre + nums[i], current);
      pre = current;
      current = temp;
    }

    return current;
  }
};