class Solution {
public:
    vector<vector<string>> ans;
    bool isvalid(int row,int col, vector<string> board,int n){
        //check upper row
        for(int i = row-1 ; i >= 0 ; i--){
            if(board[i][col] == 'Q') return false;
        }
        for(int i = row-1,j = col-1;i>=0 && j>= 0;i--,j--){
            if(board[i][j]=='Q') return false;
        }
        for(int i = row-1,j = col+1; i>=0 && j < n ; i--,j++){
            if(board[i][j]=='Q') return false;
        }

        return true;
    }
    void backtrack(vector<string> board,int row, int n){
        if(row>=n){
            ans.push_back(board);
            return;
        }

        //for loop
        for(int i = 0 ; i < n ; i++){
            if(isvalid(row,i,board,n)){
                board[row][i] = 'Q';
                backtrack(board,row+1,n);
                board[row][i] = '.';
            }
        }



    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        backtrack(board,0,n);
        return ans;
    }
};