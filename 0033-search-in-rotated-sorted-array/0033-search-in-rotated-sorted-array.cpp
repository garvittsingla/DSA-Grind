class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end= nums.size() -1;
        int n = nums.size()-1;

        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target) return mid;

            bool targetinupperhalf = target > nums[n];
            bool midinupperhald = nums[mid] > nums[n];

            if(targetinupperhalf == midinupperhald ){
                if(nums[mid]>target){
                    end = mid-1;
                }else{
                    start = mid+1;
                }
            }else{
                if(targetinupperhalf){
                    end = mid-1;
                }else{
                    start = mid+1;
                }
            }
        }
        return -1;
    }
};