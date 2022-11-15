class Solution {
public:
    string reversePrefix(string word, char ch) {
       for(int i=0;word[i]!='\0';i++){
           if(word[i]==ch){
               int k=0;
               int j=i;
               while(k<j){
                   char temp=word[k];
                   word[k]=word[j];
                   word[j]=temp;
                   k++;
                   j--;
               }
               break;
           }
       }
        return word;
    }
};