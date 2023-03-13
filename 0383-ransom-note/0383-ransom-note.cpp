#include<unordered_map>
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>seen;
        for(int i=0;i<magazine.size();i++){
            if(seen.count(magazine[i])>0){
                seen[magazine[i]]++;
            }
            else{
            seen[magazine[i]]=1;
            }
        }
         unordered_map<char,int>seen2;
        for(int i=0;i<ransomNote.size();i++){
            if(seen2.count(ransomNote[i])>0){
                seen2[ransomNote[i]]+=1;
            }
            else{
            seen2[ransomNote[i]]=1;
            }
        }
        unordered_map<char,int>::iterator it=seen2.begin();
        while(it!=seen2.end()){
            if(seen[it->first]<seen2[it->first]){
                cout<<"hi"<<endl;
                return false;
            }
            cout<<it->first<<" "<<seen[it->first]<<" "<<seen2[it->first]<<endl;
            it++;
        }
        return true;
        
    }
};