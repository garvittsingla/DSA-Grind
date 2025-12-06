class Solution {
public:
    bool isnegative(int a){
        if(a<0) return true;
        return false;
    }
    int largevalue(int a,int b){
        if(abs(a)<abs(b)) return b;
        else if(abs(b)<abs(a)) return a;
        else return 0;
    }
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        vector<int> ans;
        for(int i = 0 ; i < asteroids.size() ; i++){
            int current = asteroids[i];
            st.push(current);
            while(st.size()>1){
                int current = st.top();
                st.pop();
                int prev = st.top();
                st.pop();
                //if current is moving left and prev is moving right
                if(isnegative(current) && !isnegative(prev)){
                    int value = largevalue(current,prev);
                    if(value!=0) st.push(value);
                }else{
                    //break and add back again to stack
                    st.push(prev);
                    st.push(current);
                    break;
                }
                //
            }
        }
        while(!st.empty()){
            int value = st.top();
            st.pop();
            ans.push_back(value);

        }
        reverse(ans.begin(),ans.end());
        return ans; 
    }
};