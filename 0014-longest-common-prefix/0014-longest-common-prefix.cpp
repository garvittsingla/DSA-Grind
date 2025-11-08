class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int miniindex = 0;
        for(int i = 0 ; i < strs.size() ; i++){
            if(strs[i].length() < strs[miniindex].length()){
                miniindex = i;
            }
        }
        string possibleans = strs[miniindex];
        while(possibleans.length()!=0){
            bool ispossible = true;
            for(auto &it:strs){
                if(it.find(possibleans)!=0){
                    ispossible=false;
                }
            }

            if (ispossible == true) break;
            possibleans.pop_back();

        }
        return possibleans;
    }
};