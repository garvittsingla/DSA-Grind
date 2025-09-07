class Solution {
public:
    vector<int> sumZero(int n) {
        if(n ==1) return {0};
        vector<int> ans;
        if(n%2!=0) ans.push_back(0);
        for(int i = 1; i <= n/2 ; i++){
            int neg = -1*i;
            ans.push_back(neg);
            ans.push_back(i);
        }
        return ans;
    }
};