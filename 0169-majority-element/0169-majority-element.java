class Solution {
    public int majorityElement(int[] nums) {
        int ele = nums[0];
        int count = 0;
        for(int i = 0 ; i < nums.length ; i++){
            if(nums[i]==ele){
                count++;
            }else if(count==0){
                count = 0;
                ele = nums[i];
            }else{
                count--;
            }
        }
        int ct2 = 0;
        for(int i = 0 ; i < nums.length ; i++){
            if(nums[i]==ele) ct2++;
        }
        if(ct2>nums.length/2) return ele;
        return -1;
    }
}