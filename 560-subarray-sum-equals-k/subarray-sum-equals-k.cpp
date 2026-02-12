class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> prefix(nums.size(),0);
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            sum+=nums[i];
            prefix[i] = sum;
        }
        unordered_map<int,int> mpp;
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(prefix[i] == k) count++;
            int remaining = prefix[i] - k;
            if(mpp.find(remaining) != mpp.end()){
                count += mpp[remaining];
            }

            mpp[prefix[i]]++;
        }
        return count;
    }
};