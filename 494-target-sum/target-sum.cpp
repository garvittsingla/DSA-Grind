class Solution {
public:
    // we have 2 choices + or - as simpe as that
    int backtrack(vector<int> &nums,int target,int index,int current ){
        if (index == nums.size()) {
            return current == target ? 1 : 0;
        }
        if(index >nums.size()) return 0;
        
        //we can make 2 choices from here take + or -
        int positive = backtrack(nums,target,index+1,current+nums[index]);
        // if(index == 0) current = -1 * nums[index];
        int negative = backtrack(nums,target,index+1,current-nums[index]);
        return positive+negative;

    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return backtrack(nums,target,0,0);

    }
};