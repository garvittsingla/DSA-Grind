class Solution {
    public boolean helper(int[] nums,int h, int k ){
        long totalhours = 0;
for (int num : nums) {
    if (num >= k) {
        totalhours += num / k;
    }
    if (num % k != 0) {
        totalhours += 1;
    }
}
return totalhours <= h ? true : false;

    }
    public int minEatingSpeed(int[] piles, int h) {
        int max = piles[0];
        for(int i =  0 ; i < piles.length ; i++){
           if(piles[i]>max) max = piles[i];
        }
        int start = 1;
        int end = max;
        int possible = end;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(helper(piles,h,mid)){
                possible = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return possible;
    }
}