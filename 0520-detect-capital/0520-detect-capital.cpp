class Solution {
public:
    bool detectCapitalUse(string word) {
        int count1=0,count2=0,count3=0;
       if(word[0]>='A'&& word[0]<='Z'){
           for(int i=1;i<word.size();i++){
               if(word[i]>='a'&& word[i]<='z'){
                   count1++;
               }
               else{
                   count2++;
               }
           }
           if(count1==(word.size()-1) || count2==(word.size()-1)){
               return true;
           }
       }
        else{
            for(int i=1;i<word.size();i++){
               if(word[i]>='a'&& word[i]<='z'){
                   count3++;
               }
           }
            if(count3==word.size()-1){
                return true;
            }
        }
        return false;
    }
};