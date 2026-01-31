class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size(),-1);
        stack<int> st;
        vector<int> prevgreat(nums.size(),-1);
        int i = (2*nums.size())-1;
        while(i >= 0){
            int index = (i == 0) ? 0 : i%nums.size();
            int ele = nums[index];
            while(!st.empty()){
                int top = st.top();
                if(top <= ele){
                    st.pop();
                }else{
                    ans[index] = top;
                    break;
                }
            }
            st.push(nums[index]);
            i--;
        }
        return ans;
    }
};