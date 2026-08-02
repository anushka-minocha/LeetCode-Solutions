// Time Complexity: O(n^2)
// Space Complexity: O(1)

// Optimal Solution: Bit Manipulation

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size = nums.size();
        for (int i = 0; i < size; i++){
            int element = nums[i];
            int count = 0;
            for (int j = 0; j < size; j++){
                if (nums[j] == element){                
                    count += 1;                         
                }                                 
            }                                     
            if (count == 1){
                return  element;
            }
        }
    return 0;  
    }
};
