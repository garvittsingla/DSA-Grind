class Solution {
public:
    vector<vector<int>> result;
    void helper(int i,int currentsum,int target,vector<int> ds,vector<int> nums){
        if(i>=nums.size()) return;
        if(currentsum > target) return;
        if(target == currentsum){
            result.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        helper(i,currentsum+nums[i],target,ds,nums);
        ds.pop_back();
        helper(i+1,currentsum,target,ds,nums);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        helper(0,0,target,ds,candidates);
        return result;
    }
};