class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mpp;
        for(int i = 0 ; i < s.size() ; i++){
            mpp[s[i]]++;
        }

        for(auto &it:t){
            if(mpp[it]==0){
                return it;
            }else{
                mpp[it]--;
            }
        }
        return 'a';
    }
};