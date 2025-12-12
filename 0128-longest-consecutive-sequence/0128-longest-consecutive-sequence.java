class Solution {
    public int longestConsecutive(int[] nums) {
        if(nums.length ==0) return 0;
        int maxi = 1;
        int count = 1;
        int current = nums[0];
        Arrays.sort(nums);
        for(int i = 0 ; i < nums.length ; i++){
            if(nums[i]==current+1){
                count++;
                current= nums[i];
                maxi = Math.max(maxi,count);
            }else if(nums[i]==current){
                continue;
            }else{
                count = 1;
                current = nums[i];
            }
            // maxi = Math.max(count,maxi);
        }
        return maxi;
    }
}