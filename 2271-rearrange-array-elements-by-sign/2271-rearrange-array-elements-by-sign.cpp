class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int negativeindex = 1;
        int positiveindex = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if (nums[i]>0){
                ans[positiveindex] = nums[i];
                positiveindex+=2;
            }else{
                ans[negativeindex] = nums[i];
                negativeindex+=2;
            }
        }
        return ans;
    }
};