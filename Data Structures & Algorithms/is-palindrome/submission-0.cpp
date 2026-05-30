class Solution {
public:
    bool isPalindrome(string s) {
        /*string str = "";
        for(int i = 0; i < str.size(); i++) {
            if (s[i] == ' ') continue;
            str += (char) tolower(s[i]);
        }
        int l = 0, r = str.size()-1;
        while(l < r) {
            if (s[l] == s[r]) {
                l++; r--;
            }
            return false;
        }
        return true;*/
        int l = 0, r = s.size()-1;

        while (l < r) {
            if (s[l] == ' ') l++;
            else if (s[r] == ' ') r--;
            if (isalpha(s[l]) == 0) l++;
            if (isalpha(s[r]) == 0) r--;

            if (((char) tolower(s[l])) == ((char) tolower(s[r]))) {
                l++; r--;
            }
            else {return false;}
        }
        return true;
    }
};
