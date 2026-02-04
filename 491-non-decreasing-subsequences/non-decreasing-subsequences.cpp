class Solution {
public:
    vector<vector<int>> result;
    void backtrack(vector<int> &nums,vector<int> ds,int index){
        //base cases to avoiod tle
        if(index > nums.size()) return;
        if(ds.size()>=2) result.push_back(ds);
        set<int> st;
        for(int i = index ; i < nums.size() ; i++){
            //to skip some iterations   
            // if(i!=index && nums[i]==nums[i-1]) continue;
            if(st.count(nums[i])) continue;
            if(ds.size()>0 && nums[i] < ds[ds.size()-1]) continue;
            st.insert(nums[i]);
            ds.push_back(nums[i]);
            backtrack(nums,ds,i+1);
            ds.pop_back();
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> ds;
        // sort(nums.begin(),nums.end());
        backtrack(nums,ds,0);
        return result;
    }
};