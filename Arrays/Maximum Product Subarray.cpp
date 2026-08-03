// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pr1 = 1;
        int maxpr1 = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            pr1 = pr1 * nums[i];
            if (pr1 > maxpr1) {
                maxpr1 = pr1;
            }
            if (pr1 == 0)
                pr1 = 1;
        }
        int pr2 = 1;
        int maxpr2 = INT_MIN;
        for (int i = nums.size() - 1; i >= 0; i--) {
            pr2 = pr2 * nums[i];
            if (pr2 > maxpr2) {
                maxpr2 = pr2;
            }
            if (pr2 == 0)
                pr2 = 1;
        }

        return max(maxpr1, maxpr2);
    }
};