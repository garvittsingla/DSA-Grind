class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
       int maxor = 0;
       for(int i = 0 ; i < nums.size() ; i++){
            maxor |= nums[i];
       } 
        return helper(nums,0,maxor,0);
    }
private:
    int helper(vector<int> nums, int index , int maxor , int currentor){
        if(index == nums.size()){
            return (currentor == maxor ? 1 : 0);
        }

        int take = helper(nums, index+1 , maxor , currentor | nums[index]); 
        int nottake = helper( nums, index+1 , maxor , currentor ); 

        return take + nottake;
    }
};