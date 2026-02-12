class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(vector<int> &nums,vector<int> &ds,vector<bool> &taken){
        if(nums.size() == ds.size()){
            ans.push_back(ds);
            return;
        }
        if(nums.size() < ds.size()) return;

        for(int i = 0 ; i < nums.size() ; i++){
            if(taken[i] == true) continue;
            taken[i] = true;
            ds.push_back(nums[i]);
            backtrack(nums,ds,taken);
            taken[i] = false;
            ds.pop_back();
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> taken(nums.size(),false);
        vector<int> ds;
        backtrack(nums,ds,taken);
        return ans;
    }   
};