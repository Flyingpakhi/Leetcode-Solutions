class Solution {
public:
    string reversePrefix(string word, char ch) {
        int count=0;
        for(int i=0;word[i]!='\0';i++){
            if(word[i]==ch){
                count=i;
                break;
            }
        }
    int i=0,j=count;
    while(i<j){
	char temp;
        temp=word[i];
        word[i]=word[j];
        word[j]=temp;
        i++;
        j--;
        }
        return word;
    }
};