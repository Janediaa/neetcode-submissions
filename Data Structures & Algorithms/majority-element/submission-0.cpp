class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int a : nums) {
            if (mp.find(a) != mp.end()) {
                mp[a]++;
            }
            mp.insert({a,1});
        }
        int max = 0;
        int key = -1;
        for (auto &it : mp) {
            if (it.second > max){
                max = it.second;
                key = it.first;
            }
        }
        return key;
    }
};