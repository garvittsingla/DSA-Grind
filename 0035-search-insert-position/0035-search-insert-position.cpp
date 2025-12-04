class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int possible = nums.size();
        while(start <= end){
            int mid = start + (end-start)/2;
            if(nums[mid] == target) return mid;

            if(nums[mid]>target){
                possible = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return possible;
    }
};