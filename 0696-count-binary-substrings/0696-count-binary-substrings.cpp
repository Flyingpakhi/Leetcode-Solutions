/*Count the number of consecutive 0’s (or 1’s) from start of the string.
Then count the number of consecutive 1’s (or 0’s) from the position in the string str where count of 0’s (or 1’s) ends.
The total number of substrings with consecutive 0’s and 1’s is the minimum of the count of consecutive 0’s and 1’s found in above two steps.
Repeat the above steps till the end of the string str.*/

class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.size();
        int i=0;
        int ans=0;
        while(i<n){
            int c1=0,c0=0;
            //counting the subarray of type"01"
            if(s[i]=='0'){
                while(i<n && s[i]=='0'){
                    c0++;
                    i++;
                }
                int j=i;
                while(j<n && s[j]=='1'){
                    c1++;
                    j++;
                }
            }
            else{
                //counting the subarray of type "10"
               while(i<n && s[i]=='1'){
                    c1++;
                    i++;
                }
                int j=i;
                while(j<n && s[j]=='0'){
                    c0++;
                    j++;
                } 
            }
            ans+=min(c1,c0);
        }
        return ans;
    }
};