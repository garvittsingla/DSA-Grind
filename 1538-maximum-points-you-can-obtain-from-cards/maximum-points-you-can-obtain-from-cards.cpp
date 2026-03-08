class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
       int leftsum = 0;
       int rightsum = 0;
       int ans = 0; 
        for (int i = 0; i < k; ++i) {
            leftsum += nums[i];
        }
        ans = max(ans,leftsum);
        for(int i = 0 ; i < k;i++){
            leftsum -= nums[k-1-i];
            leftsum +=nums[nums.size()-i-1];
            ans = max(leftsum,ans);
        }
        return ans;


    }
};