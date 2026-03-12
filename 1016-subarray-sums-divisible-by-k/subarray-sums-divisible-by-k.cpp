class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum = 0;
        unordered_map<int,int> mpp;
        int ans = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];
            if(sum%k == 0) ans++;
            int rem = (sum % k + k) % k;
            if(mpp.count(rem)){
                ans += mpp[rem];
            }
            mpp[rem]++;
        }
        return ans;
    }
};