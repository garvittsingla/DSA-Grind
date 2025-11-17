class Solution {
    static List<List<Integer>> answer = new ArrayList<>(); 
    private void helper(int[] nums, int index, List<Integer> ds){
        if(ds.size() == nums.length){
            answer.add(new ArrayList<>(ds));
            return;
        }
        if(index >= nums.length ) return;
        for(int num:nums){
            if(ds.contains(num)) continue;
            ds.add(num);
            helper(nums,index+1,ds);
            ds.remove(ds.size()-1);
            // helper(nums,index+1,ds);
        }
    }
    public List<List<Integer>> permute(int[] nums) {
        answer.clear();
        helper(nums,0,new ArrayList<>());
        return answer;
    }
}