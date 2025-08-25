class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int mini = 0;
        for(int i = 0 ; i < strs.size() ; i++){
            if(strs[i].length() < strs[mini].length()){
                mini = i;
            }
        }
        string small = strs[mini];
        while(small.length() > 0){
            bool ispossible = true;
            for(auto &it:strs){
                if(it.find(small)  != 0){
                    ispossible = false;
                }
            }
            if(ispossible) return small;
            small.pop_back();
        }
        
        return "";
        
    }
};