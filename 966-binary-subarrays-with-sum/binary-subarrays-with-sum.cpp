class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
      vector<int> prefix(nums.size(),-1);
      int sum = 0;
      for(int i = 0 ; i < nums.size() ; i++){
        sum += nums[i];
        prefix[i] = sum;
      }

      unordered_map<int,int> mpp;
        int ans = 0;
      for(int i = 0 ; i < nums.size() ; i++){
        if(prefix[i] == k) ans++;
        int rem =  prefix[i] - k;
        if(mpp.count(rem)){
            ans += mpp[rem];
        }
        mpp[prefix[i]]++;
      }
      return ans;
    }
};