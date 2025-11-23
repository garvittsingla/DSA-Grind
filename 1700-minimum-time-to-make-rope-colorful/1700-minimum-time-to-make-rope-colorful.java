class Solution {
    public int minCost(String colors, int[] neededTime) {
        int count = 0;
        int maxtime = 0;
        int totaltime = 0;
        int total = 0;
        for(int i = 0 ; i < colors.length() -1 ; i++){
            if(colors.charAt(i)==colors.charAt(i+1)){
                count++;
                maxtime = Math.max(maxtime,neededTime[i]);
                totaltime += neededTime[i];
            }else{
                totaltime += neededTime[i];
                maxtime = Math.max(maxtime,neededTime[i]);
                int time = totaltime - maxtime;
                total += time;
                count = 0;
                totaltime = 0;
                maxtime = 0;
            }
        }
        if(count > 0){
             totaltime += neededTime[colors.length() - 1];
                maxtime = Math.max(maxtime,neededTime[colors.length() - 1]);
                int time = totaltime - maxtime;
                total += time;
        }
        return total;
    }
}