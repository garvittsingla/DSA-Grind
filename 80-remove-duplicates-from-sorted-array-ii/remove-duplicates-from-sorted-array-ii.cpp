class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 0; //current replacing place
        int r = 0; //front pointer to check
        
        int count = 0; // current element count
        int ele = nums[0]; //current element;

        //what we have to do is iterate and update r pointer, if none matches the place to switch is our l pointer place
        while(r<nums.size()){
            // first condition , if we find the element other than the current
            if(ele != nums[r]){
                ele = nums[r];
                count = 1;
                swap(nums[l++],nums[r]);
            // second condition, if we found the same element but its count is less than 2
            }else if(ele == nums[r]){
                if(count<2){
                    swap(nums[l++],nums[r]);
                    count++;
                }
            }
            r++;
        }
        return l;
    }
};