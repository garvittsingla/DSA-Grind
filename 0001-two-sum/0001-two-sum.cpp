class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> mpp;
       vector<int> ans;
       for(int i = 0 ; i < nums.size() ; i++){
        int remaining = target - nums[i];
        if(mpp.find(remaining)!=mpp.end()){
            ans.push_back(i);
            ans.push_back(mpp[remaining]);
            return ans;
        }else{
            mpp[nums[i]]=i;
        }
       }
       return {-1,-1};
    }
};