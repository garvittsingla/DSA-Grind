class Solution {
public:
    int longestBalanced(string s) {
        int longest = 0;
        for(int i = 0 ; i < s.size() ; i++){
            unordered_map<char,int> mpp;
            for(int j = i ; j < s.size() ; j++){
                mpp[s[j]]++;
                int current = mpp[s[j]];
                bool isbalanced = true;
                for(auto it:mpp){
                    if(it.second != current){
                        isbalanced = false;
                    }
                }
                if(isbalanced){
                    longest = max(longest,j-i+1);
                }
            }
        }
        return longest;
    }
};