class Solution {
public:
    int backtrack(string s,int index,vector<int> &dp){
       if(index == s.size()){
            return 1;
       }
       if(dp[index]!=-1){
        return dp[index];
       }
        int ways = 0;
        string small = "";
        for(int i = index ; i < s.size() ; i++){
            small += s[i];
            int number = stoi(small);
            if(number >= 1 && number <= 26){
                ways += backtrack(s,i+1,dp);
                // dp[i] = val;
            }else{
                break;
            }
        }
        dp[index] = ways;
        return ways;
       
    }
    int numDecodings(string s) {
        vector<int> dp(s.size(),-1);
        return backtrack(s,0,dp);
        // return ans;
    }
};