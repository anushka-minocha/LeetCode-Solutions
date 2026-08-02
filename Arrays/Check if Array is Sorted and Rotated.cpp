// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++){                   
            if (i == 0){                            
                if(nums[i] < nums[n-1]){
                    count++;
                }
            }else{ 
                if (nums[i]<nums[i-1]){
                    count++;
                }
            }
        }
        return  (count == 0 || count == 1);
    }
};