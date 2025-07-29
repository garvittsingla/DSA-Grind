class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       vector<int> ans;
       unordered_map<int,int> mpp;
       int n = nums.size();
       int sums = 0;
       for(auto &num : nums){
        mpp[num]++;
        sums+=num;
       }
       for(auto it:mpp){
        if (it.second==2){
            ans.push_back(it.first);
        }
       }
       int actual = n*(n+1)/2;
       int missing = actual - (sums - ans[0]);
       ans.push_back(missing);
       return ans;
    }
};