class Solution {
public:
    int val(string a){
        string s="";
            for(int j=0;j<a.size();j++){
                if(a[j]==':'){
                    continue;
                }
                s+=a[j];
            }
        int num=stoi(s);
        return num;
    }
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        int s2,e1;
        if(val(event1[0])>val(event2[0])){
            e1=val(event2[1]);
            s2=val(event1[0]);
        }
        else{
            e1=val(event1[1]);
            s2=val(event2[0]);
        }
        if(e1>=s2){
            return true;
        }
        return false;
    }
};