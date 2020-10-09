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