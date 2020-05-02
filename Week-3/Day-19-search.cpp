class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() < 1) return -1;
        else if (nums.size() < 2){
            if(target == nums[0]) return 0;
            else return -1;
        }
        int lo = 0, hi = nums.size()-1, mid;
        while(lo<=hi){
            mid = (lo + hi) / 2;
            if(nums[mid] == target) return mid;
            else if(nums[lo] == target) return lo;
            else if(nums[hi] == target) return hi;
            if(nums[mid] > target){
                if(nums[mid] > nums[lo] && nums[lo] > target){
                    lo = mid + 1;
                }
                else{
                    hi = mid - 1;
                }
            }
            else{
                if(nums[mid] < nums[lo] && nums[hi] < target){
                    hi = mid - 1;
                }
                else{
                    lo = mid + 1;
                }
            }
        }
        return -1;
    }
};
