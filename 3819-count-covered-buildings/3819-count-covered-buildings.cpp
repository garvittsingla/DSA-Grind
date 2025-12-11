class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& nums) {
        int count = 0;
        unordered_map<int,set<int>> mapx;
        unordered_map<int,set<int>> mapy;
        for(int i = 0 ; i < nums.size() ; i++){
            int x = nums[i][0];
            int y= nums[i][1];
            mapx[x].insert(y);
            mapy[y].insert(x);
        }
        for(int i = 0 ; i < nums.size() ; i++){
           int x = nums[i][0];
           int y = nums[i][1];
           //left right
           if(*mapy[y].begin()>=x || *mapy[y].rbegin()<=x) continue;

           //top bottom
           if(*mapx[x].begin()>=y || *mapx[x].rbegin()<=y) continue;

           count++;
        }
        return count;
    }
};