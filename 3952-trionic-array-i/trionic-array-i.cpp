class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int start = 0;
        //increasing
        while(i < n-1 && nums[i]<nums[i+1]) i++;
        if(i == start) return false;
        if(i == n-1) return false;

        start = i;
        //decreasing
        while(i < n-1 && nums[i]>nums[i+1]) i++;
        if(i == start) return false;
        if(i == n-1) return false;

        //increasing
        start = i;
        while(i < n-1 && nums[i]<nums[i+1]) i++;
        if(i == start) return false;
        if(i != n-1) return false;

        if(i == n-1) return true;
        return false;
    }
};