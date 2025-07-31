class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> temp =  nums;
        int previous = 1;
        for(int i = 0 ; i < nums.size() ; i++){
            int ele = nums[i];
            nums[i] = previous;
            previous = previous  * ele;
        }
        int next  = 1;
        for(int i = nums.size()-1 ; i >= 0 ; i--){
            int ele = temp[i];
            temp[i] = next;
            next = next  * ele;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            temp[i] = temp[i] * nums[i];
        }
        return temp;

    }
};