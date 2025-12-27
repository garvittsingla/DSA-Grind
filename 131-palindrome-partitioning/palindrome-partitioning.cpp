class Solution {
public:
    vector<vector<string>> ans;
    bool palindrome(string s){
        int i = 0;
        int j = s.size()-1;
        while(i<j){
            if(s[i++]!=s[j--]) return false;
        }
        return true;
    }
    void solve(string& s, int index, vector<string> ds){
        if(index >= s.size()){
            ans.push_back(ds);
            return;
        }

        //we have to loop
        string str = "";
        for(int i = index; i < s.size() ; i++){
            str+=s[i];
            if(palindrome(str)){
                ds.push_back(str);
                solve(s,i+1,ds);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> ds;
        solve(s,0,ds);
        return ans;
    }
};