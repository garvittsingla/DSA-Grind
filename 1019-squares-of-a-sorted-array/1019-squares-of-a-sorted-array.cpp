class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size(), 0);
        int right = nums.size() -1;
        int left = 0;
        int i= nums.size()-1;
        while(i>=0){
            if(abs(nums[right])>abs(nums[left])){
                res[i] = nums[right]*nums[right];
                right--;
                i--;
            }else{
                res[i] = nums[left]*nums[left];
                left++;
                i--;
            }
        }
        return res;
    }

};