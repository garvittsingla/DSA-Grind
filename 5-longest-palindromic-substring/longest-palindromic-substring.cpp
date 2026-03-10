class Solution {
public:
    bool ispalindrome(string &s,int i,int j){
        while(i < j){
            if(s[i++]!=s[j--]) return false;
        }
        return true;
    }
    string longestPalindrome(string s) {
        if(s.size()==1) return s;
        string max = s.substr(0,1);
        for(int i = 0 ; i < s.size() ; i++){
            for(int j = i+1 ; j < s.size() ; j++){
                if(ispalindrome(s,i,j)){
                    if(j-i+1 > max.size()){
                        max = s.substr(i,j-i+1);
                    }
                }
            }
        }
        return max;
    }
};