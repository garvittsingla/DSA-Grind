class Solution {
public:
    unordered_map<int,int> mpp;
    vector<vector<int>> result;
    void backtrack(vector<int>& nums,vector<int> ds){
        if(ds.size() == nums.size()){
            result.push_back(ds);
            return;
        }
        if(ds.size() > nums.size()) return;
        for(auto& it:mpp){
            if(it.second >=1 ){
                ds.push_back(it.first);
                it.second--;
                backtrack(nums,ds);
                ds.pop_back();
                it.second++;
            }
        }

    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        for(int i = 0 ; i < nums.size() ; i++){
            mpp[nums[i]]++;
        }
        backtrack(nums,{});
        return result;
    }
};