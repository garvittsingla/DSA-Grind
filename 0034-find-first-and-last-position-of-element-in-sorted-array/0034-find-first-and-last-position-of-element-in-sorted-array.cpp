class Solution {
public:
    int startposition(vector<int> nums,int target){
        int start = 0;
        int end = nums.size()-1;
        int mid = start + (end-start)/2;
        int possible = -1;
        while(start <= end){
           if(nums[mid]==target){
            possible=mid;
            end = mid-1;
           }else if(nums[mid]>target){
            end = mid-1;
           }else{
            start = mid+1;
           }
           mid = start + (end-start)/2;
        }
        return possible;
    }

     int endposition(vector<int> nums,int target){
        int start = 0;
        int end = nums.size()-1;
        int mid = start + (end-start)/2;
        int possible = -1;
        while(start <= end){
          if(nums[mid]==target){
            possible=mid;
           start = mid+1;
           }else if(nums[mid]>target){
            end = mid-1;
           }else{
            start = mid+1;
           }
           mid = start + (end-start)/2;
        }
        return possible;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(startposition(nums,target));
        ans.push_back(endposition(nums,target));
        return ans;
    }
};