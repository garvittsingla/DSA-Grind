class Solution {
public:
    int nearestheaterdistance(vector<int> &heaters,int house){
        int start = 0;
        int end = heaters.size()-1;
        int ans = INT_MAX;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(heaters[mid]==house) return 0;

            ans = min(ans,abs(house-heaters[mid]));
            if(heaters[mid] > house){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return ans;
    }
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(),heaters.end());
        int distance = 0;
        for(auto house:houses){
            int dis = nearestheaterdistance(heaters,house);
            distance = max(distance,dis);
        }
        return distance;
    }
};