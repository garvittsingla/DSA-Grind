class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> hashset(nums.size(),0);
        for(int i = 0 ; i < nums.size() ; i++){
            hashset[nums[i]]++;
        }
        for(int i =1 ; i < nums.size() ; i++){
            if(hashset[i]>1){
                return i;
            }
        }
        return -1;

    }
};