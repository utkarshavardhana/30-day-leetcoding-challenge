class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> ans(len);
        for (int i = 0, temp = 1; i < len; i++) {
            ans[i] = temp;
            temp *= nums[i];
        }
        for (int i = len - 1, temp = 1; i >= 0; i--) {
            ans[i] *= temp;
            temp *= nums[i];
        }

        return ans;

    }
};
