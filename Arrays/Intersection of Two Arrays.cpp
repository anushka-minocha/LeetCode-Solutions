// Time Complexity: O(n logn)
// Space Complexity: O(n) (for storing result)

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort (nums1.begin(), nums1.end());
        sort (nums2.begin(), nums2.end());
        vector<int> vec;
        int idx = -1;
        int i = 0;                                        
        int j = 0;                                       
        while(i < nums1.size() && j < nums2.size()){
            if (nums1[i] < nums2[j]) i++;
            else if (nums1[i] > nums2[j]) j++;
            else{
                if (idx == -1){ 
                    idx++;
                    vec.push_back(nums1[i]);
                }else{
                    if (nums1[i] != vec[idx]){
                        idx++;
                        vec.push_back(nums1[i]);
                    }
                }
                i++;
                j++;
            }
        }
        return vec;
    }
};