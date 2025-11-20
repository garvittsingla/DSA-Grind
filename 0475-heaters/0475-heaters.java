class Solution {
    private int min(int a,int b){
        if(a <= b ) return a;
        return b;
    }
    private int closestheaterdistance(int[] heaters,int house){
        int start = 0;
        int end = heaters.length-1;
        int ans = Integer.MAX_VALUE;
        while(start<=end){
            int mid = start + (end-start)/2;
            ans = min(ans,Math.abs(heaters[mid]-house));

            if(heaters[mid]>house){
                end = mid-1;
            }else{
                start = mid+1;
            }
        
        }
        return ans;
    }
    public int findRadius(int[] houses, int[] heaters) {
        int distance = 0;
        Arrays.sort(heaters);
        for(int it:houses){
            distance = Math.max(distance,closestheaterdistance(heaters,it));
        }
        return distance;
    }
}