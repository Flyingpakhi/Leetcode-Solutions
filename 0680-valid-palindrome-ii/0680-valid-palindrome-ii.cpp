class Solution {
public:
    bool sub(int low,int high,string& s){
        if(low>=high){
            return true;
        }
        if(s[low]!=s[high]){
            return false;
        }
        return sub(low+1,high-1,s);
    }
    bool validPalindrome(string s) {
//         start looping in the string by keeping two pointers at both the ends which traverse towards mid position after each iteration
        for(int i=0,j=s.size()-1;i<j;i++,j--){
            if(s[i]!=s[j]){
//                 check for substring from i+1 to j if they make pal without i or not
//             check for substring from i to j-1 if they make pal without j or not
//                 if any of them true then we say it is palindrome
                return sub(i+1,j,s)||sub(i,j-1,s);
            }
        }
        return true;
        
    }
};
 // this iteration will stop when we find a mismatch, as it is allowed to remove just one character we have two choices here,either remove character pointed by left pointer or remove character pointed by right pointer.

// We will check both the cases, remember as we have traversed equal number of steps from both sides, this mid string should also be a palindrome after removing one character, so we check two substrings, one by removing left character and one by removing right character and if one of them is palindrome then we can make complete string palindrome by removing corresponding character, and if both substrings are not palindrome then it is not possible to make complete string a palindrome under given constraint.