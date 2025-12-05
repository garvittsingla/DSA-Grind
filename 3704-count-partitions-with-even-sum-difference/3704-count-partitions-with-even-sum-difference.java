class Solution {
    public int countPartitions(int[] nums) {
        int totalsum = 0;
        for(int i = 0 ; i < nums.length ; i++){
            totalsum += nums[i];
        }
        int count = 0;
        int leftsum = 0;
        for(int i  = 0 ; i < nums.length -1 ; i++){
            leftsum += nums[i];
            int rightsum = totalsum - leftsum;
            if(Math.abs(rightsum-leftsum)%2==0){
                count++;
            }
        }
        return count;
    }
}