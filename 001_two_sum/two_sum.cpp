/*
给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个
整数，并返回他们的数组下标。
你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。

示例:
给定 nums = [2, 7, 11, 15], target = 9

因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
*/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
    for (int i = 0; i < nums.size() - 1; i++)
      for (int j = i + 1; j < nums.size(); j++) {
        if (nums[i] + nums[j] == target) {
          res = vector<int>{i, j};
        }
      }
    return res;
  }
};

int main(int argc, const char** argv) {
  Solution solution;
  vector<int> nums{2, 7, 11, 15};
  int target = 9;

  vector<int> res = solution.twoSum(nums, target);
  for_each(res.begin(), res.end(),
           [](int res) { std::cout << res << std::endl; });
  return 0;
}