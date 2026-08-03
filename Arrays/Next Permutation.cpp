// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx = -1;
        for (int i = nums.size() - 1; i > 0; i--){
            if (nums[i-1] < nums[i]){
                idx = i - 1;
                break;
            }
        }
        if (idx == -1){
            reverse (nums.begin(), nums.end());
            return;
        }
        int nextMax;
        for (int i = idx + 1; i < nums.size(); i++){
            if (nums[i] > nums[idx]) nextMax = i;
        }
        swap (nums[idx], nums[nextMax]);
        reverse (nums.begin() + idx + 1, nums.end());
    }
};