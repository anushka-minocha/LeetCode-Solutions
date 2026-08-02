// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int count = 0;
        for(int i : nums){                             
            sum += i;                                 
            count++;
        }
        int Sum = count * (count + 1) / 2;
        return Sum - sum;
    }
};