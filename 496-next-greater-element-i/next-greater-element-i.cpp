class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mpp;
        stack<int> st;
        for(int i = nums2.size()-1; i >= 0 ; i-- ){
            int element = nums2[i];
            mpp[element]=-1;
            while(!st.empty()){
                if(st.top()<=element){
                    st.pop();
                }else{
                    mpp[element] = st.top();
                    break;
                }
            }
            st.push(element);
        }

        vector<int> ans;
        for(int i = 0 ; i < nums1.size() ; i++){
            ans.push_back(mpp[nums1[i]]);
        }
        return ans;
    }
};