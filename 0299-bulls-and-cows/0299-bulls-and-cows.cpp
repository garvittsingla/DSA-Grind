class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int> mpp;
        int cows = 0,bulls = 0;
        for(int i = 0 ; i < secret.length() ; i++){
            mpp[secret[i]]++;
        }
        for(int i = 0 ; i < guess.length() ; i++){
            if(secret[i]==guess[i]){
                bulls++;
                mpp[secret[i]]--;
            }
        }
        for(int i = 0 ; i < secret.length() ; i++){
            if(secret[i]!=guess[i]){
                if(mpp.find(secret[i]) != mpp.end()){
                    if(mpp[guess[i]] > 0) {   
                    cows++;
                    mpp[guess[i]]--;
                }
                }else{
                    continue;
                }
            }
        }
       return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};