class Solution {
public:
    vector<vector<int>> result; 
    set<int> st; 
    void helper(vector<int> ds,vector<int> nums){
        if(ds.size()==nums.size()){
            result.push_back(ds);
            return;
        }

        for(int i = 0 ; i< nums.size() ; i++){
            if(st.find(nums[i])==st.end()){
                ds.push_back(nums[i]);
                st.insert(nums[i]);
                helper(ds,nums);
                ds.pop_back();
                st.erase(nums[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ds;
        helper(ds,nums);
        return result;
    }
};