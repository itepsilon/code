class Solution {
 public:
  void rotate(vector<int>& nums, int k) {
    int size = nums.size();
    k = k % size;
    nums.insert(nums.begin(), nums.end() - k, nums.end());
    nums.erase(nums.end() - k, nums.end());
  }
};