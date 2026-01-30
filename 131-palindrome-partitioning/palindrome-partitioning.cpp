class Solution {
public:
    vector<vector<string>> result;
    bool palindrome(string str){
        int i = 0;
        int j = str.size()-1;
        while(i<j){
            if(str[i++]!=str[j--]) return false;
        }
        return true;
    }
    void backtrack(string &s,int index,vector<string> ds){
        if(index >= s.size()){
            result.push_back(ds);
            return;
        }

        string ans = "";
        for(int i = index ; i < s.size() ; i++){
            ans+=s[i];
            if(palindrome(ans)){
                ds.push_back(ans);
                backtrack(s,i+1,ds);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> ds;
        backtrack(s,0,ds);
        return result;
    }
};