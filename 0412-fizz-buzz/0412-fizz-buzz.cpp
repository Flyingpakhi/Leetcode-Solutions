#include<string>
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans;
        for(int i=0;i<n;i++){
            string s="";
            int j=i+1;
            if(j%3==0 && j%5==0){
               s="FizzBuzz"; 
            } 
            else if(j%3==0){
                s="Fizz";
            }
            else if(j%5==0){
                s="Buzz";
            }
            else{
                s=to_string(j);
            }
            ans.push_back(s);
        }
        return ans;
    }
};