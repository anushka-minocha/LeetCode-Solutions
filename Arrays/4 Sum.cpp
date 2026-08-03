// Time Complexity : O(n^3)
// Space Complexity : O(1)

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> vec;
        if (nums.size() < 4) return vec; 
        sort (nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 3; i++){
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            for (int j = i + 1; j < nums.size() - 2; j++){
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                int start = j + 1, end = nums.size() - 1;
                while (start < end){
                    long long int sum = (long long int) nums[i] + nums[j] + nums[start] + nums[end];
                    if (sum == target){
                        vec.push_back ({nums[i], nums[j], nums[start], nums[end]});
                        start++;
                        end--;
                        while (start < end && nums[start] == nums[start - 1]) start++;
                        while(start < end && nums[end] == nums[end + 1]) end--;
                    }else if (sum > target){
                        end--;
                    }else{
                        start++;
                    }
                }

            } 
        }
        return vec;
    }
};