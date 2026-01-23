class Solution {
public:
    vector<vector<int>> ans;
    void recurse(vector<int>& nums,int i,vector<int> ds){
        if(i>=nums.size()){
            ans.push_back(ds);
            return;
        }
        //pick
        ds.push_back(nums[i]);
        recurse(nums,i+1,ds);
        ds.pop_back();
        recurse(nums,i+1,ds);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ds;
        recurse(nums,0,ds);
        return ans;
    }
};