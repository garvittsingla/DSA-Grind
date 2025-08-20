class Solution {
public:
    int getsum(vector<int> nums,int divisor){
        int sum = 0;
        for(auto &it:nums){
            sum+= ceil((double)it / divisor);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start = 1;
        int end = *max_element(nums.begin(), nums.end());
        int possible = end;
        while(start<=end){
            int mid = start +(end-start)/2;
            if(getsum(nums,mid)<=threshold){
                possible = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        // cout << getsum(nums,5);
        return possible;
    }
};