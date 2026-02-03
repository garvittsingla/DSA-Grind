class Solution {
public:
    vector<vector<int>> result;
    void backtrack(vector<int>& nums,vector<int> ds,vector<bool>& st){
        if(ds.size() == nums.size()){
            result.push_back(ds);
            return;
        }
        if(ds.size() > nums.size() ) return;
        for(int i = 0 ; i < nums.size() ; i++){
            if(st[i]) continue;
            if(i > 0 && nums[i]==nums[i-1] && st[i-1] == true) continue;

            ds.push_back(nums[i]);
            st[i] = true;
            backtrack(nums,ds,st);
            st[i]=false;
            ds.pop_back();
        }

    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<bool> st(nums.size(),false);
        vector<int> ds;
        sort(nums.begin(),nums.end());
        backtrack(nums,ds,st);
        return result;
    }
};