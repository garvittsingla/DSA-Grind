class Solution {
public:
    vector<vector<int>> result;
    set<int> st;
    void backtrack(vector<int> &nums,vector<int> ds){
        if(ds.size()==nums.size()){
            result.push_back(ds);
            return;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(st.find(nums[i])==st.end()){
                st.insert(nums[i]);
                ds.push_back(nums[i]);
                backtrack(nums,ds);
                st.erase(nums[i]);
                ds.pop_back();

            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        backtrack(nums,{});
        return result;
    }
};