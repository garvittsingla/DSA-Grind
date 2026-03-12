class Solution {
public:
    int numberOfSubstrings(string s) {
        int left = 0;
        int ans = 0;
        vector<int> freq(3,0);
        for(int i = 0 ; i < s.size() ; i++){
            freq[s[i]-'a']++;
            while(freq[0]>0 && freq[1] > 0&& freq[2]>0){
                ans += (s.length()-i);
                freq[s[left]-'a']--;
                left++;
            }
        }
        return ans;
    }
};