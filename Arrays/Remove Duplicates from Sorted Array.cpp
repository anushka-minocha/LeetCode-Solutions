// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int sw = 0;
        int count = 1;
        for(int i = 0; i < n; i++){
            if (nums[i] == nums[sw]){                
            }else{                                    
                sw++;
                swap (nums[i], nums[sw]);
                count++;
            }
        }
        return count;
    }
};