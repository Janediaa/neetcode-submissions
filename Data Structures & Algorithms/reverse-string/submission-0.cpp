class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0, r = s.size()-1;
        int n = s.size();
        for (int i = 0; i < s.size()/2; i++) {
            int temp = s[i];
            s[i] = s[n-i-1];
            s[n-i-1] = temp;
        }
    }
    
};