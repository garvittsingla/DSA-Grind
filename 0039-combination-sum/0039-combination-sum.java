class Solution {
    static List<List<Integer>> answer = new ArrayList<>();
    private static void  helper(int[] nums,int target, int currentsum , List<Integer> ds,int index){
        if(currentsum == target){
            answer.add(new ArrayList<>(ds));
            return;
        }
        if(currentsum > target || index >= nums.length){
            return;
        }
        ds.add(nums[index]);
        helper(nums,target,currentsum+nums[index],ds,index);
        ds.remove(ds.size()-1);
        helper(nums,target,currentsum,ds,index+1);

    }
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        answer.clear();
        helper(candidates,target,0,new ArrayList<>(),0);
        return answer;
    }
}