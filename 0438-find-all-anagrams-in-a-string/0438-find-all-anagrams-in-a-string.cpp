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
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        if(p.length()>s.length()){
            return ans;
        }
        int arr1[26]={0};
        int arr2[26]={0};
        for(int i=0;i<p.length();i++){
            arr1[p[i]-'a']++;
            arr2[s[i]-'a']++;
        }
        int start=0;
        int end=p.length();
        while(end<s.length()){
            if(find(arr1,arr2)){
                ans.push_back(start);
            }
            arr2[s[start]-'a']--;
            arr2[s[end]-'a']++;
            start++;
            end++;
        }
        if(find(arr1,arr2)){
            ans.push_back(start);
        }
        return ans;
    }
    };