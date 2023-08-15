class Solution {
public:
    char findTheDifference(string s, string t) {
        char c=0;
        for(char ch:s){
            c=c^ch;
        }
        for(char ch:t){
            c=c^ch;
        }
        return c;
    }
};