class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0;
        int ans=0;
        int j=people.size()-1;
        while(i<j){
            if(people[i]+people[j]>limit){
                ans++;
                j--;
            }
            else if(people[i]+people[j]<=limit){
                ans++;
                j--;
                i++;
            }
        }
        if(i==j){
            ans++;
        }
        return ans;
    }
};