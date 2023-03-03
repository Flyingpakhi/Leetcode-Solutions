#include<string>
class Solution {
public:
    int strStr(string haystack, string needle) {
        int val=needle.size();
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[0]){
                cout<<i<<endl;
                string s=haystack.substr(i,val);
                if(s==needle){
                    return i;
                }
            }
        }
        return -1;
    }
};