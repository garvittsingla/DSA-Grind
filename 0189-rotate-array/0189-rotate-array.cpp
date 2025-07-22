class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> resultant(nums.size());
        for (int i = 0; i < nums.size() ; i++){
            resultant[(i+k)%nums.size()] = nums[i];
        }
        nums = resultant;
    }
};