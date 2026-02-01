class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int ans = nums[0];
        nums[0] = INT_MAX;
        sort(nums.begin(), nums.end());
        ans += nums[0] + nums[1];
        return ans;
    }
};