class Solution {
public:
    bool isValid(vector<vector<char>>& board, int row, int col, char ch) {
        // check row
        for (int i = 0; i < board.size(); i++) {
            if (col == i)
                continue; // on the same index
            if (ch == board[row][i])
                return false;
        }

        // check col
        for (int i = 0; i < board.size(); i++) {
            if (row == i)
                continue; // on the same index
            if (board[i][col] == ch)
                return false;
        }

        // check the box
        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[startRow + i][startCol + j] == ch) {
                    return false;
                }
            }
        }
        return true;
    }
    bool backtrack(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                 if (board[i][j] != '.')
                        continue;
                for (int ele = 1; ele <= 9; ele++) {
                   
                    char ch = '0' + ele;
                    if (isValid(board, i, j, ch)) {
                        board[i][j] = ch;
                        if (backtrack(board)) {
                            return true;
                        }
                        board[i][j] = '.';
                    }
                }
                return false;
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
         backtrack(board);
    }
};