class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        vector<int> ans;
        for(int i= 0 ; i < nums.size() ; i++){
            int number = target - nums[i];
            if(mpp.find(number)!=mpp.end()){
                ans.push_back(mpp[number]);
                ans.push_back(i);
                return ans;
            }else{
                mpp[nums[i]]=i;
            }
        }
        return ans;
    }
};