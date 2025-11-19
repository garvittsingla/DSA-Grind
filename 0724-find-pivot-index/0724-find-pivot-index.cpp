class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefix(nums.size());
        vector<int> suffix(nums.size());

        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            sum+=nums[i];
            prefix[i] = sum;
        }
        sum = 0;
        for(int j = nums.size()-1 ; j >= 0 ; j--){
            sum+=nums[j];
            suffix[j] = sum;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(prefix[i]==suffix[i]) return i;
        }
        return -1;
    }
};