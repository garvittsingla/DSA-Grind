class Solution {
public:
    vector<string> mpp = {
        "",
        "",
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz",
    };
    vector<string> ans;
    void helper(int index,string digits, string ds){
        if(index>=digits.size()){
            ans.push_back(ds);
            return;
        }
        int digit = digits[index]-'0';
        string letters = mpp[digit];
        for(int i = 0 ; i < letters.size() ; i++){
            helper(index+1,digits,ds+letters[i]);
        }
    }
    vector<string> letterCombinations(string digits) {
        helper(0,digits,"");
        return ans;
    }
};