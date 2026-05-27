class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max = 0;
        int l = 0, r = heights.size()-1;

        while (l < r) {
            int low = min(heights[l], heights[r]);
            int area = low * (r-l);
            if (area > max) {
                max = area;
            }
            if (heights[l] > heights[r]) r--;
            else l++;
        }
        return max;
    }
};
