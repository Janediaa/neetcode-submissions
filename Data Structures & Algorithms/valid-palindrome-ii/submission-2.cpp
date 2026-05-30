class Solution {
public:
    bool validPalindrome(string s) {
        int n = s.size();
        int arr[26] = {0};

        if (n <= 2) return true;
        for (int i = 0; i < n; i++) {
            if (arr[s[i] - 'a'] == 0) {
                arr[s[i] - 'a']++;
                continue;
            }
            arr[s[i] - 'a']--;
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[s[i] - 'a'] != 0) {
                count++;
            }
        }
        if (count <= 1) {
            return true;
        }
        return false;
    }
};