class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        int ind1 = 0, ind2 = 0;
        int n1 = word1.size(), n2 = word2.size();
        int len = max(n1, n2);

        for (int i = 0; i < len; i++) {
            if (word1[ind1] != '\0') {
                res += word1[ind1];
                ind1++;
            }
            if (word2[ind2] != '\0') {
                res += word2[ind2];
                ind2++;
            }
        }
        return res;
    }
};