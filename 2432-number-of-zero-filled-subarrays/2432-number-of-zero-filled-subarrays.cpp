class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
      long long result = 0;
      long long l = 0;
      for(int i = 0 ; i< nums.size() ; i++){
        if(nums[i]==0){
            l++;
        }else{
            result += l*(l+1)/2;
            l =0;
        }
        
      }  
      result += l*(l+1)/2;
      return result;
    }
};