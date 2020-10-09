#include <vector>
using namespace std;

class Solution {
 public:
  double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size() + nums2.size();
    vector<int> nums;
    int i = 0, j = 0, k;
    int half = n / 2 + 1;
    for (k = 0; k < half; k++) {
      int tmp;
      if (i < nums1.size() && j < nums2.size()) {
        tmp = (nums1[i] < nums2[j]) ? nums1[i++] : nums2[j++];
      } else if (i < nums1.size()) {
        tmp = nums1[i++];
      } else if (j < nums2.size()) {
        tmp = nums2[j++];
      }
      nums.push_back(tmp);
    }
    if (n % 2) {
      return nums[k - 1];
    } else {
      return (nums[k - 1] + nums[k - 2]) / 2.0;
    }
  }
};