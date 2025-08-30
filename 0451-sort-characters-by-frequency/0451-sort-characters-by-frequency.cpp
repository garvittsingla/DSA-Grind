class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;
        for(int i = 0 ; i < s.length() ; i++){
            mpp[s[i]]++;
        }
        vector<pair<int,char>> hashset;
        for(auto it:mpp){
            hashset.push_back({it.second,it.first});
        }
        sort(hashset.begin(),hashset.end());
        reverse(hashset.begin(),hashset.end());
        string ans;
        for(auto it:hashset){
           for(int i = 0 ; i < it.first ; i++){
                ans += it.second;
           }
        }
        return ans;
        
    }
};