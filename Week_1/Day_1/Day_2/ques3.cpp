#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long windowSum = 0;

        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
        }

        long long maxSum = windowSum;

        for (int i = k; i < nums.size(); i++) {
            windowSum += nums[i] - nums[i - k];
            maxSum = max(maxSum, windowSum);
        }

        return (double)maxSum / k;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;

    double ans = sol.findMaxAverage(nums, k);

    cout << "Maximum Average: " << ans << endl;

    return 0;
}