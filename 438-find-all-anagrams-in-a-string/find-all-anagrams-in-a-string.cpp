class Solution {
public:
    //first making a map to store that the number of
    vector<int> findAnagrams(string s, string p) {
        if(s.size()<p.size()) return {};
        vector<int> freqa(26,0);
        for(int i= 0 ; i < p.length() ; i++){
            freqa[p[i]-'a']++;
        }
        vector<int> ans;
        int k = p.size();
        vector<int> freqb(26,0);
        for(int i = 0 ; i < k ; i++){
            freqb[s[i]-'a']++;
        }
        if(freqa==freqb) ans.push_back(0);
        for(int i = k ; i < s.size() ; i++){
            freqb[s[i]-'a']++;
            freqb[s[i-k]-'a']--;

            if(freqa == freqb) ans.push_back(i-k+1);

        }
        return ans;

    }
};