class Solution {
public:
    vector<string> ans;
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
        "wxyz"
    };
    void backtrack(string digits,string ds,int index){
        if(digits.size() == ds.size()){
            ans.push_back(ds);
            return;
        }
        if(index >= digits.size()) return;
        int currentdigit = digits[index] - '0';
        string number = mpp[currentdigit];
        for(int i = 0 ; i < number.size() ; i++){
            ds.push_back(number[i]);
            backtrack(digits,ds,index+1);
            ds.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        backtrack(digits,"",0);
        return ans;
    }
};