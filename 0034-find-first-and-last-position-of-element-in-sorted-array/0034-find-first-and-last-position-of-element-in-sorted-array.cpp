class Solution {
public:
    int binarysearch(vector<int> &nums,int target,bool first){
        int possible = -1;
        int start = 0;
        int end = nums.size()-1;
        while(start<=end){
            int mid=  start+(end-start)/2;
            if(nums[mid] == target){
                possible = mid;
                first == true ? end = mid-1 : start = mid+1;
            }else if(nums[mid]>target){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return possible;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
        ans[0] = binarysearch(nums,target,true);
        ans[1] = binarysearch(nums,target,false);
        return ans;
    }
};