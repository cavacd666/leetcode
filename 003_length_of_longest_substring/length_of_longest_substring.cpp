#include <string>
#include <unordered_map>

using namespace std;
class Solution {
 public:
  int lengthOfLongestSubstring(string s) {
    int length(0), start(0), end(0), result(0);
    unordered_map<char, int> hash;
    while (end < s.size()) {
      if (hash.find(s[end]) != hash.end() && hash[s[end]] >= start) {
        start = hash[s[end]] + 1;
        length = end - start;
      }
      hash[s[end]] = end;
      end++;
      length++;
      result = max(result, length);
    }
    return result;
  }
};