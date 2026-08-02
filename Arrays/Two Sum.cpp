// Time Complexity: O(n) (considering map takes O(1) time)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        vector<int> vec;               
        for (int i = 0; i < n; i++){           
            int k = target - nums[i];
            if (mpp[k] > 0) vec.push_back(i), vec.push_back(mpp[k] - 1);
            mpp[nums[i]] = i + 1;
        }
        return vec;   
    }
};