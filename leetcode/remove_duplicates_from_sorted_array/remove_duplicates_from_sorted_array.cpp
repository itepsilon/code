#include <vector>
using namespace std;

class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;
    int i = 0;
    for (int j = 0; j < nums.size() - 1; j++) {
      if (nums[j] != nums[j + 1]) {
        nums[i++] = nums[j];
      }
    }
    nums[i++] = nums[nums.size() - 1];
    return i;
  }
};