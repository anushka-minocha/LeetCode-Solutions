// Time Complexity : O(n^2)
// Space Complexity : O(1)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort (nums.begin(), nums.end());
        vector<vector<int>> vec;
        for (int i = 0; i < nums.size() - 2; i++){
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int sum = -nums[i];
            int start = i + 1, end = nums.size() - 1;
            while (start < end){
                if (nums[start] + nums[end] == sum){
                    vec.push_back ({nums[start], nums[end], nums[i]});
                    start++;
                    end--;
                    while(start < end && nums[start] == nums[start - 1]) start++;
                    while(start < end && nums[end] == nums[end + 1]) end--;
                }else if (nums[start] + nums[end] > sum){
                    end--;
                }else{
                    start++;
                }
            }
        }
        return vec;
        
    }
};