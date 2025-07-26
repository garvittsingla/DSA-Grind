class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            int sums = 0;
            for(int j = i ; j < nums.size() ; j++){
                sums+=nums[j];
                if(sums == k){
                    count++;
                }
            }
        }
        return count;
    }
};