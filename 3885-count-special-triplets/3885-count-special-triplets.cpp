class Solution {
public:
    //bruteforce
    int specialTriplets(vector<int>& nums) {
       int count = 0;
       const int mod = 1e9 + 7;
       unordered_map<int,int> rightmap;
       unordered_map<int,int> leftmap;
       for(auto num:nums){
        rightmap[num]++;
       }
       for(int i = 0 ; i < nums.size() ; i++){
            rightmap[nums[i]]--;
            int left = leftmap[nums[i]*2];
            int right= rightmap[nums[i]*2];
            count = (count + (1LL * left*right))%mod; 
            leftmap[nums[i]]++;
       }
        return count;
    }

};