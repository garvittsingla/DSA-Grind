class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> ans;
        for(int i = 0 ; i <= nums.size() - k ; i++){
            int max = nums[i];
            bool found = true;
            for(int j = i+1 ; j <= i + k -1;j++){
                if(nums[j] == nums[j-1]+1){
                    max = nums[j];
                }else{
                    found = false;
                    break;
                }
            }
            if(found){
                ans.push_back(max);
            }else ans.push_back(-1);
        }
        return ans;
    }
};