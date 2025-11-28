class Solution {
public:
    vector<vector<int>> result;
    void helper(int index, vector<int> ds, vector<int> &nums){
        // if(index >= nums.size()){
            result.push_back(ds);
            // return;
        // }
        for(int i = index ; i < nums.size() ; i++){
            if(i>index && nums[i]==nums[i-1]){
                continue;
            }
            ds.push_back(nums[i]);
            helper(i+1,ds,nums);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ds;
        helper(0,ds,nums);
        return result;
    }
};
