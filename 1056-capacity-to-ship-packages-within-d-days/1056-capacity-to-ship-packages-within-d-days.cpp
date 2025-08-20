class Solution {
public:
    int getweight(vector<int> nums,int days, int maxweight){
        int day = 1;
        int current = 0;
        for(int i = 0 ; i <nums.size() ; i++){
           current+=nums[i];
           if(current > maxweight){
            day++;
            current=nums[i];
           }
        }
        return day;
    }
    int getmax(vector<int> nums){
        int largest = nums[0];
        for(auto &it:nums){
            if(it>largest){
                largest = it;
            }
        }
        return largest;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int start = getmax(weights);
        int end =accumulate(weights.begin(), weights.end(), 0); ;
        int possible = end;
        while(start<=end){
            int mid = start +(end-start)/2;
            if(getweight(weights,days,mid)<=days){
                possible = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return possible;
    }
};