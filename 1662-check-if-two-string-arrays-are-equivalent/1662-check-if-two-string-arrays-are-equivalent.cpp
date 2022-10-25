#include <cstring>
class Solution {
public:
    string print(vector<string>& input){
        string ans=" ";
        for(int i=0;i<input.size();i++){
            ans+=input[i];
        }
        return ans;
    }
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string ans1=print(word1);
        string ans2=print(word2);
        int len1=ans1.size();
        int len2=ans2.size();
        if(len1>len2){
 for(int i=0;i<len1;i++){
     if(ans1[i]!=ans2[i]){
         return false;
     }
 }
        }
        else{
          for(int i=0;i<len2;i++){
     if(ans1[i]!=ans2[i]){
         return false;
     }
 }  
        }
        return true;
    }
};