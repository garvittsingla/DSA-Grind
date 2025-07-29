class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       vector<int> ans(nums.size());
       vector<int> temp = nums;
       sort(nums.begin(),nums.end());
       unordered_map<int,int> mpp;

       for(int i = nums.size()-1 ; i >=0 ; i--){
        if(i==0){
            mpp[nums[i]]=0;
        }else if(nums[i] > nums[i-1]){
            mpp[nums[i]]=i;
        }else{
            mpp[nums[i]] = 0;
        }
       }
       for(int i = 0 ; i < temp.size() ; i++){
        ans[i] = mpp[temp[i]];
       }
       return ans;
    }
};