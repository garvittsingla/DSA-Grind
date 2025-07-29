class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int current = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[current]!=nums[i]){
                current++;
                nums[current] = nums[i];
            }
        }
            return current+1;
    }
};