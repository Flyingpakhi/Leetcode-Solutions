class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int *mapping=new int[26];
        int seq=0;
        for(int i=0;i<order.size();i++){
            mapping[order[i]-'a']=seq;
            seq++;
        }
        int res=0;
        for(int i=0;i<words.size()-1;i++){
            string pre=words[i];
            string nex=words[i+1];
            int len=min(pre.size(),nex.size());
            for(int l=0;l<len;l++){
                if(mapping[pre[l]-'a']>mapping[nex[l]-'a']){
                    return false;
                }
               else if(mapping[pre[l]-'a']<mapping[nex[l]-'a']){
                   res++;
                   break;
                }
            }
            if(pre.size()>nex.size() && res==0){
                return false;
            }
        }
        return true;    
    }
};