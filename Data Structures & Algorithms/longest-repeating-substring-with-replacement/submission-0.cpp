class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, ans = 0;
        int max_freq = 0;
        vector<int> freq(26,0);

        for (int r = 0; r < s.size(); r++) {
            freq[s[r] - 'A']++;
            max_freq = max(max_freq, freq[s[r] - 'A']);

            if (r-l+1 - max_freq > k) {
                freq[s[l] - 'A']--;
                l++;
            }
            ans = max(ans, r-l+1);
        }
        return ans;
    }
};