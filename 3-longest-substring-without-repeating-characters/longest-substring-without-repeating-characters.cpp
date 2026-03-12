class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        unordered_map<char,int> mpp;
        int ans = 0;
        for(int i = 0 ; i < s.size() ; i++){
            mpp[s[i]]++;
            while(mpp[s[i]]>1){
                mpp[s[left]]--;
                left++;
            }
            ans = max(ans,i-left+1);
        }
        return ans;
    }

};