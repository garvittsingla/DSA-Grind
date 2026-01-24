class Solution {
public:
    vector<vector<int>> ans;
    void recurse(vector<int> &nums,int target,int curr, vector<int> ds,int index){
        if(target == curr){
            ans.push_back(ds);
            return;
        }
        if(curr > target || index >= nums.size()) return;

        if(curr+nums[index] <= target){
            ds.push_back(nums[index]);
            recurse(nums,target,curr+nums[index],ds,index);
            ds.pop_back();
        }
        recurse(nums,target,curr,ds,index+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        recurse(candidates,target,0,ds,0);
        return ans;
    }
};