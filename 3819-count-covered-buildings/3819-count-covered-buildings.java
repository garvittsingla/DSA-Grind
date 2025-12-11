class Solution {
    public int countCoveredBuildings(int n, int[][] nums) {
        int count = 0;
        Map<Integer, TreeSet<Integer>> mapx = new HashMap<>();
        Map<Integer, TreeSet<Integer>> mapy = new HashMap<>();
        
        for(int i = 0; i < nums.length; i++){
            int x = nums[i][0];
            int y = nums[i][1];
            mapx.putIfAbsent(x, new TreeSet<>());
            mapy.putIfAbsent(y, new TreeSet<>());
            mapx.get(x).add(y);
            mapy.get(y).add(x);
        }
        
        for(int i = 0; i < nums.length; i++){
            int x = nums[i][0];
            int y = nums[i][1];
            
            //left right
            if(mapy.get(y).first() >= x || mapy.get(y).last() <= x) continue;
            
            //top bottom
            if(mapx.get(x).first() >= y || mapx.get(x).last() <= y) continue;
            
            count++;
        }
        return count;
    }
}