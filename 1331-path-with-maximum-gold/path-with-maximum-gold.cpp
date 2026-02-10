class Solution {
public:
    int ans = 0;
    void backtrack(vector<vector<int>>& nums,vector<vector<bool>> &visited,int row,int col,int r,int c,int current){
        ans = max(ans,current);
        // if(row >= r || col >= c || row < 0 || col < 0){
        //     return;
        // };
        // if(visited[row][col] == true || nums[row][col]==0){
        //     return;
        // }
        vector<pair<int,int>> cango = {
            {row,col+1},
            {row,col-1},
            {row-1,col},
            {row+1,col}
        };
        for(int i = 0 ; i < cango.size() ; i++){
            int togorow = cango[i].first;
            int togocol = cango[i].second;
            if(togorow < 0 || togocol < 0|| togorow >= r || togocol >= c || visited[togorow][togocol]==true || nums[togorow][togocol] == 0 ) continue;
            visited[togorow][togocol] = true;
            backtrack(nums,visited,togorow,togocol,r,c,current+nums[togorow][togocol]);
            visited[togorow][togocol] = false;
        }

        
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        vector<vector<bool>> visited(r,vector<bool> (c,false));
        for(int i = 0 ; i< r; i++){
            for(int j = 0 ; j < c ; j++){
                if(grid[i][j]!=0){
                    visited[i][j] = true;
                    backtrack(grid,visited,i,j,r,c,grid[i][j]);
                    visited[i][j] = false;
                }
            }
        }
        return ans;
    }
};