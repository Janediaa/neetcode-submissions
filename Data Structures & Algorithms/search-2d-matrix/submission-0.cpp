class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int lo = 0, hi = m*n-1;
        while(lo <= hi) {
            int mid = lo + (hi-lo)/2;

            int row = mid / n;
            int col = mid % n;

            int val = matrix[row][col];

            if (val == target) return true;
            else if (val > target) hi = mid-1;
            else lo = mid+1;
        }
        return false;
    }
};