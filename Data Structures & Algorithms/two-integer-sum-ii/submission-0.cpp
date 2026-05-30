class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int l = 0, r = numbers.size()-1;

        while (l < r) {
            int sum = numbers[l] + numbers[r];
            if (sum == target) {
                result.push_back(numbers[l]);
                result.push_back(numbers[r]);
                break;
            }
            else if (sum > target) {
                r--;
                continue;
            }
            l++;
        }
        return result;
    }
};
