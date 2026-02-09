class Solution {
public:
    vector<string> ans;
    void backtrack(string s,int index,string ds,int dots){
        if(dots > 4){
            return;
        }
        if(index >= s.size() && dots == 4){
            ds.pop_back();
            ans.push_back(ds);
        }
        string num = "";
        for(int i = index ; i < min(index+3,(int)s.size()) ; i++){
            
            num+=s[i];
            if(num.length()>1 && num[0]=='0') break;
            int number = stoi(num);
            if(number <= 255){
                backtrack(s,i+1,ds+num+'.',dots+1);
            }
        }
    }
    vector<string> restoreIpAddresses(string s) {
        backtrack(s,0,"",0);
        return ans;
    }
};