class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        long long count=1;
        long long ans=1;
        long long min1=complexity[0];
        for(long long i=1;i<complexity.size();i++){
            if(min1>=complexity[i]) return 0;
            ans=(ans*count)%1000000007;
            count++;
        }
        return ans;
    }
};