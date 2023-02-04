class Solution {
public:
        bool find(int arr1[],int arr2[]){
        for(int i=0;i<26;i++){
            if(arr1[i]!=arr2[i]){
                return false;
            }
        }
        return true;
    }
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        int arr1[26]={0};
        int arr2[26]={0};
        for(int i=0;i<s.length();i++){
            arr1[s[i]-'a']++;
            arr2[t[i]-'a']++;
        }
        if(find(arr1,arr2)){
            return true;
        }
        return false;
    }                                      
};