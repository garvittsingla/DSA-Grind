class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int>(n,0));

        int row = n;
        int col = n;

        int total = n * n;
        int count = 1;

        int startrow = 0;
        int startcol = 0;
        int endrow = row-1;
        int endcol = col-1;
        
        while(count <= total){
            for(int i = startcol ; i <= endcol ; i++){
                matrix[startrow][i] = count;
                count++;
            }
            startrow++;
            for(int i = startrow ; i <= endrow ; i++){
                matrix[i][endcol] = count;
                count++;
            }
            endcol--;

            for(int i = endcol ; i >= startcol ; i--){
                matrix[endrow][i] = count;
                count++;
            }
            endrow--;

            for(int i = endrow ; i>= startrow ; i--){
                matrix[i][startcol] = count;
                count++;
            }
            startcol++;
            
        }
        
    return matrix;
    }
};