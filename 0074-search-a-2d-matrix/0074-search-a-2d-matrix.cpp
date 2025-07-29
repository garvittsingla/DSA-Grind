class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int row = 0 ; row < matrix.size() ; row++){
            for(int j = 0 ; j < matrix[row].size() ; j++){
                if(matrix[row][j]==target){
                    return true;
                }
            }
        }
        return false;
    }
};