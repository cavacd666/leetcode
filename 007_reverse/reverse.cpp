class Solution {
 public:
  int reverse(int x) {
    int tmp = 0;
    while (x) {
      if (tmp > INT_MAX / 10) return 0;
      if (tmp < INT_MIN / 10) return 0;
      tmp = tmp * 10 + x % 10;
      x = x / 10;
    }
    return tmp;
  }
};