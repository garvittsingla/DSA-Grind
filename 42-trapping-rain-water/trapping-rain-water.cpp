class Solution {
public:
    int trap(vector<int>& nums) {
        vector<int> suffix(nums.size(),-1);
        vector<int> prefix(nums.size(),-1);
        int max = -1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]>max){
                max = nums[i];
            }
            prefix[i] = max;
        }
        max = -1;
        for(int i = nums.size()-1 ; i >= 0 ; i--){
            if(nums[i]>max){
                max = nums[i];
            }
            suffix[i] = max;
        }

        int ans = 0;
        for(int i= 0 ; i < nums.size() ; i++){
            int maxtill = min(prefix[i],suffix[i])-nums[i];
            ans += maxtill;
        }
        return ans;

    }
};