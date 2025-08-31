class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maximum = nums[0];
        
        for(int i = 0 ; i < nums.size() ; i++){
            int product = 1;
            for(int j = i ; j < nums.size() ; j++){
                product *= nums[j];
                maximum = max(maximum,product);
            }
        }
            return maximum;
    }
};