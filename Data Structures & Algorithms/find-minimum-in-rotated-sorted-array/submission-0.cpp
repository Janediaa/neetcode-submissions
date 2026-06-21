class Solution {
public:
    int findMin(vector<int> &nums) {
        int lo = 0, hi = nums.size()-1;
        int ans = nums[lo];

        while(lo <= hi) {
            int mid = lo + (hi-lo)/2;
            if (nums[mid] >= nums[hi]) {
                ans = min(ans, nums[mid]);
                lo = mid+1;
            } else {
                ans = min(ans, nums[mid]);
                hi = mid-1;
            }
        }
        return ans;
    }
};
