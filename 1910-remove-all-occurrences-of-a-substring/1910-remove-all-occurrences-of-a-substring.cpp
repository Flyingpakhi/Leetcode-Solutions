class Solution {
public:
    string removeOccurrences(string s, string part) {
        //s.find()gives us the index of first occurence of part
        while(s.length()!=0 && s.find(part)<s.length()){
            //erase the string of part
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};