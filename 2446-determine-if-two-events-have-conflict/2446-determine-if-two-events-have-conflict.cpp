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
        int s1=val(event1[0]);
        int e1=val(event1[1]);
        int s2=val(event2[0]);
        int e2=val(event2[1]);
        if(s1>s2){
            int temp=s1;
            s1=s2;
            s2=temp;
            temp=e1;
            e1=e2;
            e2=temp;
        }
        cout<<s1<<" "<<e1<<" "<<s2<<" "<<e2<<endl;
        if(e1>=s2){
            return true;
        }
        return false;
    }
};