class Solution {
public:
    int trap(vector<int>& height) {
        int count = 0;
        vector<int> maxL(height.size());
        vector<int> maxR(height.size());

        maxL[0] = 0, maxR[height.size()-1] = 0;
        for (int i = 1; i < height.size(); i++) {
            maxL[i] = max(maxL[i-1], height[i-1]);
        }
        for (int i = height.size()-2; i >= 0; i--) {
            maxR[i] = max(maxR[i+1], height[i+1]);
        }
        for (int i = 0; i < height.size(); i++) {
            int area = min(maxL[i], maxR[i]) - height[i];
            if (area > 0) {
                count += area;
            }
        }
        return count;
    }
};