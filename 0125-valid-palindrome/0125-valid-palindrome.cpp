class Solution {
    private:
   //faltu character hata do..
    bool validchar(char ch){
        if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')||(ch>='0' && ch<='9')){
            return 1;
        }
        return 0;
    }
    
int tolower_case(char ch){
    if((ch>='a' && ch<='z')||(ch>='0'&& ch<='9')){
        return ch;
    }
    else{
        char tempu;
        tempu=ch-'A'+'a';
        return tempu;
    }
}
bool check_pal(string name){
        int check=1;
        int k=name.length();
for(int i=0;i<k/2;i++){
    if(name[i]!=name[k-i-1]){
        check=0;
        break;
    }
}
        return check;
}
    
    

public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.length();i++){
            if(validchar(s[i])){
                temp.push_back(s[i]);
            }
        }
        for(int i=0;i<temp.length();i++){
            temp[i]=tolower_case(temp[i]);
        }
            
         return check_pal(temp);   
    }
};