// Time Complexity : O(n) (considering map takes O(1) time)
// Space Complexity : O(n)

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        map<int, int> mpp;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++){
            sum += nums[i];
            if (sum == k) count++;
            if (mpp[sum - k] > 0) count += mpp[sum - k];
            mpp[sum]++;
        }
        return count;
    }
};