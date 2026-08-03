// Time Complexity : O(mn)
// Space Complexity : O(1)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int start = 0;
        int end = n - 1;
        while(start < end){
            swap (matrix[start], matrix[end]);
            start++;
            end--;
        }
        int row = 0, column = 0;
        while(row <= column &&  row < n - 1){
            if (row < column) swap (matrix[row][column], matrix[column][row]);
            if (column == n - 1){
                row++;
                column = row;
            }else column++;

        }
    }
};