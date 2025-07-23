class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ; i++){
            int diff = target - nums[i];
            if(mpp.find(diff)!=mpp.end()){
                ans.push_back(i);
                ans.push_back(mpp[diff]);
                return ans;
            }else{
                mpp[nums[i]] = i;
            }
        }
        return {-1,-1};
    }
};