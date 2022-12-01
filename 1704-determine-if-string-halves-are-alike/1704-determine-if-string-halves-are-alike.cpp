class Solution {
public:
    bool halvesAreAlike(string s) {
        int len=s.length();
        int i=0;
        int j=len-1;
        int count1=0;
        int count=0;
        while(i<j){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u' ||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                count++;
            }
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u' ||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U'){ 
                count1++;
            }
            i++;
            j--;
        }
        if(count==count1){
            return true;
        }
        else{
            return false;
        }
    }
};