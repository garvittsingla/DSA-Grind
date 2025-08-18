class Solution {
public:
   int binarysearch(vector<int> nums,int target,bool isfirst){
        int start = 0;
        int end = nums.size()-1;
        int possible = -1;
        while(start<=end){
            int mid = start + (end - start)/2;
            if(isfirst){
                if(nums[mid]==target){
                    possible = mid;
                    end = mid-1;
                }else if(nums[mid]>target){
                    end= mid-1;
                }else{
                    start = mid+1;
                }
            }
            else{
                 if(nums[mid]==target){
                    possible = mid;
                    start = mid+1;
                }else if(nums[mid]>target){
                    end= mid-1;
                }else{
                    start = mid+1;
                }
            }
        }
        return possible;
   }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(binarysearch(nums,target,true));
        ans.push_back(binarysearch(nums,target,false));
        return ans;
    }
};