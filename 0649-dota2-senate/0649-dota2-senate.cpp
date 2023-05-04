class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>R,D;
        for(int i=0;i<senate.size();i++){
            if(senate[i]=='R'){
                R.push(i);
            }
            else{
                D.push(i);
            }
        }
        int count=0;
        while(!R.empty()&& !D.empty()){
            if(R.front()<D.front()){
                    D.pop();
                    R.pop();
                    R.push(senate.size()+count);
                    count++;
            }
            else{
                D.pop();
                R.pop();
                D.push(senate.size()+count);
                count++;
            }
        }
        if(R.size()==0){
            return "Dire";
        }
        return "Radiant";
    }
};