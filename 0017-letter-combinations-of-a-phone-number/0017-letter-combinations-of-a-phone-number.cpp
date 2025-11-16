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
    void helper(string digits,int index,string ds){
        if(index >= digits.length()){
            answer.push_back(ds);
            return;
        }
        int number = digits[index] - '0';
        int times= number == 7 || number == 9 ? 4 : 3;
        for(int i = 0 ; i < times ; i++){
            // ds.push_back(mpp[number][i]);
            helper(digits,index+1,ds+mpp[number][i]);
        }

    }
    vector<string> letterCombinations(string digits) {
        string ds = "";
        helper(digits,0,ds);
        return answer;
    }
};