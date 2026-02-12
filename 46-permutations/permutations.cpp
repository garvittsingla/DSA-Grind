class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(vector<int> &nums,vector<int> &ds,set<int> &st){
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return;
        }
        if(ds.size() > nums.size()){
            return;
        }

        for(int i = 0 ; i < nums.size() ; i++){
            if(!st.count(nums[i])){
                st.insert(nums[i]);
                ds.push_back(nums[i]);
                backtrack(nums,ds,st);
                st.erase(nums[i]);
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        set<int> st;
        vector<int> ds;
        backtrack(nums,ds,st);
        return ans;

    }
};