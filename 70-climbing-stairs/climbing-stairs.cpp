class Solution {
public:
    
    int backtrack(int n,int current,vector<int> &dp){
       if(current == n) return 1;
       if(current > n) return 0;

       if(dp[current] != -1) return dp[current];
       int one =backtrack(n,current+1,dp);
       int two =backtrack(n,current+2,dp);

       dp[current] = one+two;
       return dp[current];
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return backtrack(n,0,dp);
    }
};