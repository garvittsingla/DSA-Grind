class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int ele = nums[0];
       int count = 0;
       for(int i = 0 ; i < nums.size() ; i++){
        if(count == 0){
            ele = nums[i];
            count++;
        }else if(ele == nums[i]){
            count +=1;
        }else{
            count-=1;
        }
       }

       int cnt = 0;
       for(int i = 0; i < nums.size() ; i++){
        if(nums[i]==ele) cnt++;
       }

       if(cnt>=nums.size()/2){
        return ele;
       }
       return -1;
    }
};