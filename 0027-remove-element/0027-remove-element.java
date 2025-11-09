class Solution {
    public void swap(int[] nums,int i, int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    public int removeElement(int[] nums, int val) {
        int pos= 0;
        for(int i = 0 ; i <  nums.length ; i++){
            if(nums[i]!=val){
                swap(nums,pos,i);
                pos++; 
            }
        }
        System.out.println(pos+1);
        return pos;
    }
}