class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        
        stack<long long> st;
        for(int i = 0 ; i < nums.size() ; i++){
            if(st.empty()) st.push(nums[i]);

            else{
                long long curr = nums[i];
                while(!st.empty() && st.top() == curr){
                    curr*=2;
                    st.pop();
                }
                st.push(curr);
                
            }
        }
        vector<long long> ans(st.size());
        int ele = st.size()-1;
        while(!st.empty()){
            ans[ele--] = st.top();
            st.pop();
        }
        return ans;
        
    }
};