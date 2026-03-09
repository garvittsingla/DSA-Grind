class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int total = 0;
        for(int i = 0 ; i < k ; i++){
            total += nums[i];
        }
        int ans = total;

        for(int i = 0 ; i < k ; i++){
            total -= nums[k-i-1];
            total += nums[nums.size() - i - 1];
            ans = max(ans,total);
        }
        return ans;
    }
};