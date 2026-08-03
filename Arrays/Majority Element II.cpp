// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> vec;
        int num1 = INT_MIN;
        int count1 = 0;
        int count2 = 0;
        int num2 = INT_MIN;
        for (int i = 0; i < nums.size(); i++){
            if (count1 == 0 && nums[i] != num2) num1 = nums[i], count1++;
            else if (nums[i] != num1 && count2 == 0) num2 = nums[i], count2++;
            else if (nums[i] == num1) count1++;
            else if (nums[i] == num2) count2++;
            else{
                count1--;
                count2--;
            }
        }
        count1 = 0;
        count2 = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == num1) count1++;
            if (nums[i] == num2) count2++;
        }
        int n = nums.size();
        if (count1 > n / 3) vec.push_back (num1);
        if (count2 > n / 3) vec.push_back (num2);
        
        return vec; 
    }
};