class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans(nums.size());
        for(int i = 0 ; i < nums.size() ; i++){
            ans[i] = helper(nums,nums[i]);
        }
        return ans;
    }
private:
    int helper(vector<int> nums,int num){
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]<num){
                count++;
            }
        }
        return count;
    }
};