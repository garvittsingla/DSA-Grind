class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int> ex;
        if(s.size() == 0) return 0;
        bool iszero = s[0] == '0' ? true : false;
        int count = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(iszero && s[i]=='0'){
                count++;
            }else if(!iszero && s[i]=='1'){
                count++;
            }else if(iszero && s[i]=='1'){
                ex.push_back(count);
                count = 1;
                iszero = false;
            }else{
                ex.push_back(count);
                count = 1;
                iszero= true;
            }
        }
        ex.push_back(count);
        int groups = 0;
        for(int i = 1 ; i < ex.size() ; i++){
            groups += min(ex[i-1],ex[i]);
        }
        return groups;
    }
};