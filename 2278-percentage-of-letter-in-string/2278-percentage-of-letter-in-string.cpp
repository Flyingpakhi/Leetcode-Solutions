class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count=0;
        int size=s.length();
      for(int i=0;s[i]!='\0';i++){
          if(s[i]==letter){
              count++;
          }
      }
        return (count*100)/size;
    }
};