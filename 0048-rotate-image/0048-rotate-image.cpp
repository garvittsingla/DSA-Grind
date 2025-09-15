class Solution {
public:
   void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> temp(n,vector<int>(n,0));
        int row = 0;
        int col = n-1   ;
        for(int i = 0 ; i < n ; i++){
           for(int j = 0 ; j < n ; j++){
            temp[row][col] = matrix[i][j];
            row++;
           }
           row=0;
           col--;
        }
        matrix = temp;
   }
};
