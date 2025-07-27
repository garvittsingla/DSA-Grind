class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isincreasing = true;
        bool isdecreasing = true;
        for(int i =0 ; i < nums.size() -1 ; i++){
            if(nums[i] > nums[i+1]){
                isincreasing = false;
                break;
            }else{
                continue;
            }
        }
        for(int i =0 ; i < nums.size() -1 ; i++){
            if(nums[i] < nums[i+1]){
                isdecreasing = false;
                break;
            }else{
                continue;
            }
        }

        if(isincreasing || isdecreasing ){
            return true;
        }else {
            return false;
        }

    }
};