class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for (int i : nums) {
            if (!mp[i]) {
                mp[i] = 1;
                continue;
            }
            mp[i]++;
        }
        int key;
        for (auto &p : mp) {
            if (p.second > 1) {
                key = p.first;
                break;
            }
        }
        vector<int> vec;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == key) {
                vec.push_back(i);
            }
        }
        int sum = 0;
        for (int val : vec) {
            sum = abs(sum - val);
        }
        
        if (sum <= k) return true;
        return false;
    }
};