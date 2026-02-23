class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int count = pow(2,k);
        unordered_map<string,int> mpp;
        for(int i = 0 ; i+k <= s.size() ; i++){
            string small = s.substr(i,k);
            if(mpp.count(small)){
                continue;
            }else{
                count--;
                mpp[small]++;
            }
        }
        if(count == 0) return true;
        return false;
    }
};