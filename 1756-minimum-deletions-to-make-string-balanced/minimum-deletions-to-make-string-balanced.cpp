class Solution {
public:
    int minimumDeletions(string s) {
        if(s.size()==1) return 0;
       int totala = 0;
       int beforea = 0;
       int beforeb = 0;
       
        for(int i = 0 ; i <s.size();i++){
            if(s[i]=='a') totala++;
        }   
        int ans = totala;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i]=='a') beforea++;
            else beforeb++;

            int aftera = totala - beforea;
            
            ans = min(ans,aftera+beforeb);
        }

        return ans == INT_MAX ? 0 : ans;
    }
};