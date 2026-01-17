class Solution {
public:
    vector<string> ans;
    void solve(int n,int open,int close, string ds){
        if(open == n && close == n){
            ans.push_back(ds);
            return;
        }
        if(open>n || close > n) return ;
        if(open < n){
            solve(n,open+1,close,ds+"(");
        }
        if(close < open){
            solve(n,open,close+1,ds+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        solve(n,0,0,"");
        return ans;
    }
};