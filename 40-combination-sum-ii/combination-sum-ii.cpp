class Solution {
public:
    vector<vector<int>> result;
    void backtrack(vector<int>& nums,int target,int current,vector<int> ds,int index){
        if(current == target){
            result.push_back(ds);
            return;
        }
        if(current > target || index >= nums.size()) return;
        for(int i = index ; i  < nums.size(); i++){
            if(i!=index && nums[i]==nums[i-1]) continue;
            if(nums[i]+current<=target){
                ds.push_back(nums[i]);
                backtrack(nums,target,current+nums[i],ds,i+1);
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        backtrack(candidates,target,0,{},0);
        return result;
    }
};