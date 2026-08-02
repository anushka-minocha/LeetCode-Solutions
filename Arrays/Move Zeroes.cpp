// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int z = 0;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] == 0) continue;
            else{                                
                swap (nums[i], nums[z]);           
                z++;
            }
        }
    }
};