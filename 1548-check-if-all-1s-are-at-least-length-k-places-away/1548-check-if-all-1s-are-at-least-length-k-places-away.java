class Solution {
    public boolean kLengthApart(int[] nums, int k) {
        int last = -1;
        for(int i = 0 ; i < nums.length ; i++){
            if(nums[i]==1){
                if(last == -1){
                    last = i;
                    continue;
                }
                int distance = i - last - 1;
                last = i;
                if(distance < k) return false;
            }
        }
        return true;
    }
}