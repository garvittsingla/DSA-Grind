class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<bool>> board(row,vector<bool>(col,false));
        for(int i = 0 ; i < row; i++){
            for(int j = 0 ; j < col ; j++){
                if(matrix[i][j]==0){
                    board[i][j] = true;
                }
            }
        }
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                if(board[i][j]){
                    int c = 0;
                    while(c < col){
                        matrix[i][c++] = 0;
                    }
                    int r = 0;
                    while(r < row){
                        matrix[r++][j] = 0;
                    }
                }
            }
        }
    }
};