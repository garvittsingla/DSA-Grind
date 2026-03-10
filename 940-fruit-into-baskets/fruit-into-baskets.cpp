class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left = 0;
        int r = 0;
        int ans = 0;
        unordered_map<int,int> mpp;
        while(r < fruits.size()){
            mpp[fruits[r]]++;
            if(mpp.size()>2){
                while(mpp.size()>2){
                mpp[fruits[left]]--;
                if(mpp[fruits[left]] == 0) mpp.erase(fruits[left]);
                left++;
           }
            }

           ans = max(ans,r-left+1);
            r++;
        }
        return ans;
    }
};