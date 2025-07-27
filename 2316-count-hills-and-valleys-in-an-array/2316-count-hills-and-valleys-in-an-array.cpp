class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count = 0;
        for(int i = 1 ; i < nums.size()-1 ; i++){
            if(nums[i] == nums[i-1]) continue;
            int prev = i-1;
            int next = i+1;
            while(prev >= 0 && nums[prev] == nums[i]) {
                prev--;
            }
            while(next < nums.size() && nums[next] == nums[i]) {
                next++;
            }

            if(prev >= 0 && next < nums.size()) {
                if(nums[i] > nums[prev] && nums[i] > nums[next]) {
                    count++; 
                } else if(nums[i] < nums[prev] && nums[i] < nums[next]) {
                    count++; 
                }
            }

        }
        return count;
    }
};