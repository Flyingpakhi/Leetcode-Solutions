class Solution {
public:
    void partition(map<char,bool>&seen,char a,string& st){
        if(seen.find(a)!=seen.end()){
            seen.clear();
        }
        else{
            seen[a]=true;
            st+=a;
        }
    }
    int partitionString(string s) {
        int size=s.length();
        map<char,bool>seen;
        string st="";
        int ans=0;
        for(int i=0;i<size;i++){
            partition(seen,s[i],st);
            if(seen.size()==0){
                ans++;
                st="";
                partition(seen,s[i],st);
            }
        }
        if(seen.size()!=0){
            ans++;
        }
        return ans;
    }
};