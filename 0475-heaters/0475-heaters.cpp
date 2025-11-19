class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int distance = 0;
        for(int i = 0 ; i < houses.size() ; i++){
            int closestheater = abs(heaters[0]-houses[i]);
            for(int j = 0 ; j < heaters.size() ; j++){
                if(abs(heaters[j]-houses[i])<closestheater){
                    closestheater = abs(heaters[j]-houses[i]);
                }
            }
            distance = max(distance,closestheater);
        }
        return distance;
    }
};