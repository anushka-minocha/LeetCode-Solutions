// Time Complexity : O(n logn)
// Space Complexity : O(n) (For storing result)

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.size() == 1) return intervals;
        sort (intervals.begin(), intervals.end());
        vector<vector<int>> vec;
        vec.push_back (intervals[0]);
        int idx = 0;
        for (int i = 1; i < intervals.size(); i++){
            if (vec[idx][1] >= intervals[i][0]){
                vec[idx][1] = max(vec[idx][1], intervals[i][1]);
            }else{
                vec.push_back (intervals[i]);
                idx++;
            }
        }
        return vec;
    }
};