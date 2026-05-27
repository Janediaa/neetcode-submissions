class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map <int, int> diff;
        for (int i = 0; i < nums.size(); i++) {
            int minus = target - nums[i];
            if (diff.find(minus) != diff.end()) {
                result.push_back(diff[minus]);
                result.push_back(i);
                return result;
            }
            else {
                diff.insert({nums[i], i});
            }
        }
    }
};
