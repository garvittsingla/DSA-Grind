class Solution {
public:
    vector<string> ans;
    void generate(int n,int open,int close,string ds){
        if(open == n && close == n){
            ans.push_back(ds);
            return;
        }

        if(open < n){
            generate(n,open+1,close,ds+"(");
        }

        if(close<open){
            generate(n,open,close+1,ds+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        generate(n,0,0,"");
        return ans;
    }
};