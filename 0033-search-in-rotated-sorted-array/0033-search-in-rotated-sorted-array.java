class Solution {
    public int pivot(int[] nums){
        int start = 0;
        int end = nums.length -1 ;
        while(start<end){
            int mid = start + (end - start )/2;
            if(nums[mid]>nums[end]){
                start = mid+1;
            }else{
                end = mid;
            }
        }
        return start;
    }
    public int binarysearch(int[] nums, int start, int end,int target){
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return -1;
    }
    public int search(int[] nums, int target) {
        int pivotindex = pivot(nums);
        System.out.println(pivotindex);
        int index = binarysearch(nums,0,pivotindex-1,target);
        if(index!=-1) return index;
        
        return binarysearch(nums,pivotindex,nums.length-1,target);
        
        
    }
}