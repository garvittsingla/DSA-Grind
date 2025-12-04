class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        while(start <= end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target) return mid;
            bool targetinupper = target > nums[nums.size()-1];
            bool midinupper = nums[mid] > nums[nums.size()-1];

            if(targetinupper==midinupper){
                if(nums[mid] > target){
                    end = mid-1;
                }else{
                    start = mid+1;
                };
            }else{
                if(targetinupper){
                    end = mid-1;
                }else{
                    start = mid+1;
                }
            }
        }
        return -1;
    }
};