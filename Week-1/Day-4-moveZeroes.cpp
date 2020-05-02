class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        nums.erase(std::remove(nums.begin(), nums.end(), 0), nums.end());
        vector<int> myVec(n-nums.size(), 0);
        nums.insert(nums.end(), myVec.begin(), myVec.end());
    }
};
