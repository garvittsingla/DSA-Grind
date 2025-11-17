class Solution {
public:
    vector<vector<int>> answer;
    unordered_set<int> st;
    void helper(int index, vector<int> nums,vector<int> ds){
        if(ds.size() == nums.size()){
            answer.push_back(ds);
            return;
        }
        for(auto num:nums){
            if(st.find(num)==st.end()){
                ds.push_back(num);
                st.insert(num);

                helper(index+1,nums,ds);

                ds.pop_back();
                st.erase(num);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ds;
        helper(0,nums,ds);
        return answer;
    }
};