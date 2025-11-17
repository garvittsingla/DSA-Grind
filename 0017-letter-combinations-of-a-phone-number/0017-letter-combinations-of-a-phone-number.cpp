class Solution {
public:
    vector<string> answer;
    unordered_map<int,vector<char>> mpp = {
        {2,{'a','b','c'}},
        {3,{'d','e','f'}},
        {4,{'g','h','i'}},
        {5,{'j','k','l'}},
        {6,{'m','n','o'}},
        {7,{'p','q','r','s'}},
        {8,{'t','u','v'}},
        {9,{'w','x','y','z'}},
    };
    void helper(string digits, int index,string ds){
        if(ds.size() == digits.size()){
            answer.push_back(ds);
            return;
        }
        int digit = digits[index] -'0';
        vector<char> letters = mpp[digit];
        for(int i = 0 ; i < letters.size() ; i++ ){
            helper(digits,index+1,ds+letters[i]);
        }
    }
    vector<string> letterCombinations(string digits) {
      string ds ="";
      helper(digits,0,"");
      return answer;
    }
};