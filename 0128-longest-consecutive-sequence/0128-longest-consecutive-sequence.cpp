class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      int n = nums.size();
      if (n == 0) return 0;
      int current = nums[0];
      int maxcount = 1;
      int count = 1;
      sort(nums.begin(),nums.end());
      for(int i = 0 ; i < n ; i++){
        if(nums[i]==current+1){
            count++;
            current=  nums[i];
        }else if(nums[i]==current){
            continue;
        }else{
            count = 1;
            current = nums[i];
        }
        maxcount = max(maxcount,count);
      
      }
      return maxcount;
    }
};