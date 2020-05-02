class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      multiset<int> s;
      int result = 0;  
      int sum = 0;  
      s.emplace(sum);
      for(int n: nums) {
          sum += n;
          result += s.count(sum - k);  
          s.emplace(sum);  
      }
      return result;  
    }
};
