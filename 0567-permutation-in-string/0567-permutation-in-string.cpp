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
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return false;
        }
        int arr1[26]={0};
        int arr2[26]={0};
        for(int i=0;i<s1.length();i++){
            arr1[s1[i]-'a']++;
            arr2[s2[i]-'a']++;
        }
        int start=0;
        int end=s1.length();
        while(end<s2.length()){
            if(find(arr1,arr2)){
                return true;
            }
            arr2[s2[start]-'a']--;
            arr2[s2[end]-'a']++;
            start++;
            end++;
        }
        if(find(arr1,arr2)){
            return true;
        }
        return false;
    }
};