class Solution {
public:
    set<vector<int>> result;
    void helper(int index, vector<int> &ds, vector<int> &nums){
        if(index >= nums.size()){
            result.insert(ds);
            return;
        }
        ds.push_back(nums[index]);
        helper(index+1,ds,nums);
        ds.pop_back();
        helper(index+1,ds,nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ds;
        helper(0,ds,nums);
        vector<vector<int>> res = vector<vector<int>>(result.begin(),result.end());
        return res;
    }
};
