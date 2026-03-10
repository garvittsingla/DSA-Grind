class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int ans = 0;
        unordered_map<int,int> mpp;
        for(int i = 0 ; i < s.size() ; i++){
            if(mpp.count(s[i])){
                left = max(left,mpp[s[i]]+1);
            }
            mpp[s[i]] = i;
            ans = max(ans,i-left+1);
        }
        return ans;
    }
};