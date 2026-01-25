class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end()); //sort them to make it as close as possible
        int minimum = INT_MAX;
        int i = 0;
        int j = i+k-1;
        while(j<nums.size()){
            minimum = min(minimum,nums[j]-nums[i]);
            i++;
            j++;
        }
        return minimum == INT_MAX ? 0 : minimum;
    }
};