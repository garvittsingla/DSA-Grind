class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        // if(people.size())
        sort(people.begin(),people.end());
        int boats = 0;
        int i = 0;
        int j = people.size()-1;
        while(i<=j){
            //fill the bigger people , if space left put smaller ones
            if(people[i]+people[j]<=limit){
                boats++;
                i++;
                j--;
            }else if(people[j]<=limit){
                boats++;
                j--;
            }
        }
        return boats;
    }
};