// Moore's Voting Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++){
            if (freq == 0){                      
                ans = nums[i];                 
            }                                  
            if (nums[i] == ans){
                freq++;
            }else{
                freq--;
            }
        }
        return ans;
    }
};