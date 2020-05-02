class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        for(int i=1; i<nums.size(); i++) {
            nums[i] = max(nums[i-1] + nums[i], nums[i]);
        }
        return *max_element(nums.begin(), nums.end());
    }
};
