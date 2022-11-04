class Solution {
public:
    int isVowel(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            return 1;
        }
        else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            return 1;
        }
        else{
            return 0;
    }
    }
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(isVowel(s[i])){
                for(int k=j;k>i;k--){
                    if(isVowel(s[k])){
                        char temp=s[i];
                        s[i]=s[k];
                        s[k]=temp;
                        j=k-1;
                        break;
                    }
                }
            }
            i++;
        }
        return s;
    }
};