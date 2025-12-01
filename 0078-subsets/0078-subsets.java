class Solution {
    List<List<Integer>> result = new ArrayList<>();
    public void helper(int index, List<Integer> ds, int[] nums){
        // if(index>=nums.length ){
            result.add(new ArrayList<>(ds));
            // return;
        // }
       for(int i = index ; i < nums.length ; i++){
        ds.add(nums[i]);
        helper(i+1,ds,nums);
        ds.remove(ds.size()-1);
       }
    }

    public List<List<Integer>> subsets(int[] nums) {
        List<Integer> ds = new ArrayList<>();
        helper(0,ds,nums);
        return result;
    }
}