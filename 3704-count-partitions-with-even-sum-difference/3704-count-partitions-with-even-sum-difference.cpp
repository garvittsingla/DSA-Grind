class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];
        }
        int count = 0;
        int leftsum = 0;
        for(int i = 0 ; i < nums.size() -1 ; i++){
            leftsum += nums[i];
            int rightsum = sum - leftsum;
            if(abs(rightsum-leftsum)%2==0){
                count++;
            }
        }
        return count;
    }
};