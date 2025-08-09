class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int start = 0;
       int end = nums.size()-1;
       int mid = start + (end-start)/2;
       int possible =nums.size();
       while(start<=end){
            if(nums[mid]<target){
                start = mid+1;
            }else{
                possible = mid;
                end = mid-1;
            }
            mid = start + (end-start)/2;
       }
       return possible;
    }
};