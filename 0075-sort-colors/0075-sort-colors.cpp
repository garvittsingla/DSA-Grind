class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> hashset(3,0);
        int n = nums.size();
        for(int i = 0 ; i < nums.size();i++){
            hashset[nums[i]] += 1;
        }
        int index= 0 ;
        for(int i = 0 ; i < hashset[0] ; i++){
            nums[index]=0;
            index++;
        }
        for(int i = 0 ; i < hashset[1] ; i++){
            nums[index]=1;
            index++;
        }
        for(int i = 0 ; i < hashset[2] ; i++){
            nums[index]=2;
            index++;
        }
    }
};