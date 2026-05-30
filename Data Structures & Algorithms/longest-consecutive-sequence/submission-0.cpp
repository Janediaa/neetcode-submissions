//longest sequence of consecutive nums

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;
        int longest = 0;
        for (int val: nums) {
        	set.insert(val);
        }

        for (int a : set) {
        	if (set.find(a-1) == set.end()) {
        		int length = 0;
        		while (set.find(a+length) != set.end()) {
        			length++;
        		}
        		longest = max(longest, length);
        	}
        }
        return longest;
    }
};
