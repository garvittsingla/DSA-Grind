class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum = 0;
        unordered_map<int,int> mpp;
        mpp[0]=-1;
        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];
            if(i !=0 && sum % k == 0) return true;
            int rem = sum%k;
            if(mpp.count(rem)){
                if(i-mpp[rem] >= 2) return true;
            }else mpp[rem] = i;
        }
        return false;
    }
};