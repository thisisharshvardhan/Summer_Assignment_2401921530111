#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int left = 0;
        int right = n - 1;
        int pos = n - 1;

        while (left <= right) {
            int a = nums[left] * nums[left];
            int b = nums[right] * nums[right];

            if (a > b) {
                ans[pos] = a;
                left++;
            } else {
                ans[pos] = b;
                right--;
            }

            pos--;
        }

        return ans;
    }
};