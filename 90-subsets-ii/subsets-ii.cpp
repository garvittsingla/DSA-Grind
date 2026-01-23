class Solution {
public:
    vector<vector<int>> ans;
    void recurse(vector<int>& nums,int index,vector<int>ds){
        ans.push_back(ds);
        for(int i = index ; i < nums.size() ; i++){
            if(i!=index && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            recurse(nums,i+1,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        vector<int> ds;
        recurse(nums,0,ds);
        return ans;
    }
};