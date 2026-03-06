class Solution {
public:
    int backtrack(vector<vector<int>> &nums,int row,int col,vector<vector<int>> &dp){

        if(row == nums.size()-1){
            return nums[row][col];
        }

        if(dp[row][col] != INT_MIN){
            return dp[row][col];
        }

        int left = backtrack(nums,row+1,col,dp);
        int right = backtrack(nums,row+1,col+1,dp);

        return dp[row][col] = nums[row][col] + min(left,right);
    }

    int minimumTotal(vector<vector<int>>& triangle) {

        int n = triangle.size();

        vector<vector<int>> dp(n,vector<int>(n,INT_MIN));

        return backtrack(triangle,0,0,dp);
    }
};