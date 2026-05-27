class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, bool> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (mp.find(nums[i]) != mp.end()) {
                return true;
            }
            mp.insert({nums[i], true});
        }
        return false;
    }
};