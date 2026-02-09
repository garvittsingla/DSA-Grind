class Solution {
public:
    int ans = 0;
    void backtrack(vector<vector<int>>& nums,vector<int> &mpp,int count,int index){
        if(index >= nums.size()){
            for(int i:mpp){
                if (i!=0) return;
            }
            ans = max(ans,count);
            return;
        }

        //dont fullfill current req
        backtrack(nums,mpp,count,index+1);

        //fullfill the current request
        int from = nums[index][0];
        int to = nums[index][1];

        mpp[from]--;
        mpp[to]++;

        backtrack(nums, mpp, count + 1, index + 1);

        // backtrack
        mpp[from]++;
        mpp[to]--;

    }
    int maximumRequests(int n, vector<vector<int>>& requests) {
        //we can take up a index and full fill the request or not full fill
        // if we full fill just add in ans otherwise just pass it
        int count = 0;
        vector<int> mpp(n,0);
        backtrack(requests,mpp,count,0);
        return ans;
    }
};