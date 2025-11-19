class Solution {
public:
    int helper(vector<int> &nums,long long success,long long spell){
        int start = 0;
        int end = nums.size()-1;
        int possible = -1;
        while(start<=end){
            int mid = start + (end-start)/2;
            long long ans = nums[mid] * spell;
            if(ans >= success){
                possible = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return possible == -1 ? 0 : nums.size()-possible;
        // return nums.size() - possible;   
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> result;
        sort(potions.begin(),potions.end());
        for(int i = 0 ; i < spells.size() ; i++){
            long long spell = spells[i];
            result.push_back(helper(potions,success,spell));
        }
        return result;
    }
};