class Solution {
    private int helper(int[] nums,long success,long spell){
        int start = 0;
        int end = nums.length-1;
        int possible = -1;
        while(start<=end){
            int mid = start + (end-start)/2;
            long ans = spell * nums[mid];
           
            if(ans >= success){
                possible = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return possible == -1 ? -0: nums.length -possible;
    }
    public int[] successfulPairs(int[] spells, int[] potions, long success) {
        int[] result = new int[spells.length];
         Arrays.sort(potions);
        for(int i = 0 ; i < spells.length ; i++){
            result[i] = helper(potions,success,spells[i]);
        }
        return result;
    }
}