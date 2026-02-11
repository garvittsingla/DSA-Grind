class Solution {
public:
    vector<string> ans;
    void backtrack(int index,string &s,string ds){
        if(index >= s.size()){
            ans.push_back(ds);
            return;
        }

        // we always have 2 choices to captialize it or to lowercase it
        if(s[index] >= '0' && s[index] <= '9'){ 
            backtrack(index+1,s,ds+s[index]);
        }else{
            //lowercase
            backtrack(index+1,s,ds+char(tolower(s[index])));
            backtrack(index+1,s,ds+char(toupper(s[index])));
        }
        

    }
    vector<string> letterCasePermutation(string s) {
        backtrack(0,s,"");
        return ans;
    }
};