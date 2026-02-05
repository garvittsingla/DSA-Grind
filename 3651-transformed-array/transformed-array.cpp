class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        for(int i = 0 ; i < nums.size() ; i++){
            int target = (i + nums[i]) % (int)nums.size();
            if(target < 0) target+=(int)nums.size();
            ans[i] = nums[target];
        }
        return ans;
    }
};