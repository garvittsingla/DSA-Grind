class Solution {
public:
    vector<vector<int>> result;
    void helper(int index, vector<int> &ds, vector<int> &nums){
        // if(index >= nums.size()){
            result.push_back(ds);
            // return;
        // }
        for(int i = index ; i < nums.size() ; i++){
            ds.push_back(nums[i]);
            helper(i+1,ds,nums);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ds;
        helper(0,ds,nums);
        // vector<vector<int>> res = vector<vector<int>>(result.begin(),result.end());
        return result;
    }
};