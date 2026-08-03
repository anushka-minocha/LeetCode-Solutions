// Time Complexity : O(n logn)
// Space Complexity : O(n)

class Solution {
private:
    void countPairs(vector<int>& nums, int start, int mid, int end, int& cnt) {
        int j = mid + 1;
        for (int i = start; i <= mid; i++) {
            while (j <= end && nums[i] > 2LL * nums[j]) {
                j++;
            }
            cnt += (j - (mid + 1));
        }
    }
    void merge(vector<int>& nums, int start, int mid, int end) {
        vector<int> temp;
        int i = start;
        int j = mid + 1;
        while (i <= mid && j <= end) {
            if (nums[i] < nums[j]) {
                temp.push_back(nums[i]);
                i++;
            } else {
                temp.push_back(nums[j]);
                j++;
            }
        }
        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }
        while (j <= end) {
            temp.push_back(nums[j]);
            j++;
        }
        int idx = 0;
        for (int i = start; i <= end; i++) {
            nums[i] = temp[idx];
            idx++;
        }
    }
    void mergeSort(vector<int>& nums, int start, int end, int& cnt) {
        if (start >= end)
            return;
        int mid = start + (end - start) / 2;
        mergeSort(nums, start, mid, cnt);
        mergeSort(nums, mid + 1, end, cnt);
        countPairs(nums, start, mid, end, cnt);
        merge(nums, start, mid, end);
    }

public:
    int reversePairs(vector<int>& nums) {
        int cnt = 0;
        mergeSort(nums, 0, nums.size() - 1, cnt);
        return cnt;
    }
};