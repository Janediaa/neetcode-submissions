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
        int key = -1;
        for (auto &p : mp) {
            if (p.second > 1) {
                key = p.first;
                break;
            }
        }
        if(key == -1) return false;
        vector<int> vec;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == key) {
                vec.push_back(i);
            }
        }
        int sum = vec[vec.size()-1];
        for (int i = vec.size()-2; i >= 0; i--) {
            sum -= vec[i];
        }
        
        if (abs(sum) <= k) return true;
        return false;
    }
}; 