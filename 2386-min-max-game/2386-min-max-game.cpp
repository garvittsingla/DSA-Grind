class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        
        while(nums.size()>1){
            vector<int> newnums(nums.size()/2);
            int current = 0;
            bool ismini = true;
            for(int i = 0 ; i < nums.size() ; i= i+2){
                newnums[current] =( ismini == true ? min(nums[i],nums[i+1]) : max(nums[i],nums[i+1]));
                if(ismini){
                    ismini = false;
                }else{
                    ismini = true;
                }
                current++;
            }
            nums = newnums;
           
        }
        
        return nums[0];
        // return 1;
    }
};