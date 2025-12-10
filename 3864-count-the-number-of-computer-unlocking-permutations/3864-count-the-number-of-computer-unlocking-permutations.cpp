class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        long long mod = 1000000007;
        long long ans = 1;
        for(int i = 1; i < complexity.size() ; i++){
            if(complexity[i] <= complexity[0]) return 0;
            ans = (ans*i)%mod;       
        }
            return (int)ans;
    }
};