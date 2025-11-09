class Solution {
    public int max(int x,int y){
        if(x>=y) return x;
        return y;
    }
    public int findMaxConsecutiveOnes(int[] nums) {
        int count = 0;
        int maximum = 0;
        for(int i = 0 ; i < nums.length ; i++){
            if(nums[i]==1) count++;
            else count = 0;
            maximum = max(count,maximum);
        }
        return maximum;
    }
}