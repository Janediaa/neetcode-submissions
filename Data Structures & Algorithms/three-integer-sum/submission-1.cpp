//3sum


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> arr;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i-1] == nums[i]) {
                continue;
            }
            int low = i+1, high = nums.size()-1;
            int target = -nums[i];
            while(low < high) {
                int sum = nums[low] + nums[high];
                if (sum == target) {
                    arr.push_back({nums[i], nums[low], nums[high]});
                    low++;
                    high--;

                    while (low < high && nums[low] == nums[low-1]) {
                        low++;
                    }
                    while (low < high && nums[high] == nums[high+1]) {
                        high--;
                    }
                }
                else if (sum < target) {
                    low++;
                } else {
                    high--;
                }
            }
        }
        return arr;
    }
};
