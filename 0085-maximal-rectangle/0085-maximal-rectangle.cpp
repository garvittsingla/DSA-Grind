class Solution {
public:
    vector<int> nsl(vector<int> &nums){
        int size = nums.size();
        vector<int> ans(nums.size(),-1);
        stack<int> st;
        for(int i = 0 ;  i < size ; i++){
            int ele = nums[i];
            while(!st.empty()){
                if(nums[st.top()]>=ele){
                    st.pop();
                }else{  
                    ans[i] = st.top();
                    break;
                }
            }
            st.push(i);
        }
        return ans;
    }
     vector<int> nsr(vector<int> &nums){
        int size = nums.size();
        vector<int> ans(nums.size(),-1);
        stack<int> st;
        for(int i = size - 1 ;  i >= 0 ; i--){
            int ele = nums[i];
            while(!st.empty()){
                if(nums[st.top()]>=ele){
                    st.pop();
                }else{  
                    ans[i] = st.top();
                    break;
                }
            }
            st.push(i);
        }
        return ans;
    }
    int lah(vector<int>& nums,vector<int> &nsl,vector<int> &nsr){
        int maxarea= 0;
        for(int i = 0 ; i < nums.size() ; i++){
            int left = (nsl[i] == -1) ? 0 : nsl[i]+1 ;
            int right = (nsr[i] == -1) ? nums.size() : nsr[i];
            int width = right - left;
            int area = nums[i]*width;
            maxarea = max(maxarea,area);
        }
        return maxarea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        //convert each row in a same fashion as of maximum rectangle in histogram
        vector<vector<int>> prefixsum(matrix.size(),vector<int>(matrix[0].size(),-1));
        int row = matrix.size();
        int col = matrix[0].size();
        for(int j = 0 ; j < col ; j++){
            int sum = 0;
            for(int i = 0 ; i < row ; i++){
                int ele = matrix[i][j] - '0';
                if(ele == 0){
                    sum = 0;
                }else{
                    sum+=ele;
                }
                prefixsum[i][j] = sum;
            }
        }
        int ans = 0;
        for(int i = 0 ; i < row ; i++){
            vector<int> nsl1 = nsl(prefixsum[i]);
            vector<int> nsr1 = nsr(prefixsum[i]);
            int area = lah(prefixsum[i],nsl1,nsr1);
            ans = max(ans,area);
        }

        return ans;
        
    }
};