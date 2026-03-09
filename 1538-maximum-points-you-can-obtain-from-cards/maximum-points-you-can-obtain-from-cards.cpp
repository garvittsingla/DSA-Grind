class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        //what i can do is take total of first n cards and mkae them in ans, then atake a card from it and add a card from the end , so we can make it
        int total = 0;
        for(int i = 0 ; i < k ; i++){
            total += nums[i];
        }
        int ans = total;
        for(int i = 0; i< k ; i++){
            total -= nums[k-i-1];
            total += nums[nums.size()-1-i];
            ans = max(ans,total);
        }
        return ans;
    }
};