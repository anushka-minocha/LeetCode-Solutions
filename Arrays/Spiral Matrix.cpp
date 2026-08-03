// Time Complexity : O(mn)
// Space Complexity : O(mn) (For storing result)

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int p = 0, q = 0;
        vector<int> vec;
        int m = matrix.size() - 1;
        int n = matrix[0].size() - 1;
        while (p <= m && q <= n){
            for (int i = q; i <= n; i++) vec.push_back (matrix[p][i]);
            for (int i = p + 1; i <= m; i++) vec.push_back (matrix[i][n]);
            if (p < m) for (int i = n - 1; i >= q; i--) vec.push_back (matrix[m][i]);
            if (q < n) for (int i = m - 1; i >= p + 1; i--) vec.push_back (matrix[i][q]);
            p++, q++, m--, n--;
        }
        return vec;
    }
};