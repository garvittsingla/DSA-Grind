class Solution {
public:
    int maxArea(vector<int>& nums) {
        int ans = 0;
        int left = 0;
        int right = nums.size()-1;
        while(left<right){
            int area = min(nums[left],nums[right]) * (right-left);
            ans = max(ans,area);
            if(nums[left]>nums[right]) right--;
            else left++;
        }
        return ans;
    }
};