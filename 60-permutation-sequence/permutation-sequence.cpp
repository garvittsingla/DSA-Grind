class Solution {
public:
    int count = 0;
    string ans = "";
    void backtrack(vector<int>& nums,vector<bool> &st,string ds,int k){
        if(nums.size() == ds.size()){
            count++;
            if(count == k){
                ans = ds;
            }
            return;
        }
        if(ds.size() > nums.size() || count >= k) return;

        for(int i = 0 ; i < nums.size() ; i++){
            if(st[i] == true) continue;
            st[i] = true;
            ds+= to_string(nums[i]);
            backtrack(nums,st,ds,k);
            ds.pop_back();
            st[i] = false;
        }
    }
    string getPermutation(int n, int k) {
        vector<int> nums(n,0);
        for(int i = 0; i < n ; i++){
            nums[i] = i+1;
        }
        vector<bool> st(n,false);
        backtrack(nums,st,"",k);
        return ans;
    }
};