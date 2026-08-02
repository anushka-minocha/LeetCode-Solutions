// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.size() == 1) return;
        if (k > nums.size())  k = k % nums.size();
        reverse (nums.begin(), nums.end());
        int start = 0;
        int mid = k - 1;
        int end = nums.size() - 1;                           
        while (start < mid){                              
            swap (nums[start], nums[mid]);
            start++;
            mid--;
        }
        while (k < end){
            swap (nums[k], nums[end]);
            k++;
            end--;
        }

    }
};