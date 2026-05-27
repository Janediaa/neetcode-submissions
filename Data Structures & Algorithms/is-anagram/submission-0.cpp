class Solution {
public:
    bool isAnagram(string s, string t) {
        /*map <char, int> mp1;
        map <char, int> mp2;

        int n1 = s.size();
        int n2 = t.size();*/

        if (s.size() != t.size()) {
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s == t) return true;

        return false;
    }
};
