class Solution {
public:
    int findpivot(vector<int> nums,int target){
        int start = 0;
        int end = nums.size()-1;
        int mid = start + (end-start)/2;
        while(start <end){
            if(nums[mid]>nums[mid+1]){
                return mid;
            }else if(nums[mid]>nums[start]){
                start = mid+1;
            }else{
                end = mid;
            }
            mid = start + (end-start)/2;
        }
        return start;
    }
    int binarysearch(vector<int> nums,int start,int end,bool asc,int target){
        int mid = start+(end-start)/2;
        while(start<=end){
            if(asc==true){
                if(nums[mid]==target){
                    return mid;
                }else if(nums[mid] >target ){
                    end = mid-1;
                }else{
                    start = mid+1;
                }
            }else{
                if(nums[mid]==target){
                    return mid;
                }else if(nums[mid] >target ){
                    start = mid+1;
                }else{
                    end = mid-1;
                }
            }
            mid = start + (end-start)/2;

        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int pivotindex = findpivot(nums,target);
        cout << pivotindex;
        int ans = binarysearch(nums,0,pivotindex,true,target);
        if(ans != -1) return ans;
        return binarysearch(nums,pivotindex+1,nums.size()-1,true,target);
    }
};