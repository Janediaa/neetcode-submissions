class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        sort(strs.begin(), strs.end());

        string first = strs.front();
        string last = strs.back();
        int minLength = min(first.size(), last.size());
        int i = 0;

        while (first[i] == last[i] & i < minLength) {
            i++;
        }
        for (int j = 0; j < i; j++) {
            result += first[j];
        }
        return result;
    }
};