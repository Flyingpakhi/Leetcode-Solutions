class Solution {
public:
    void reverseString(vector<char>& s)
{
    int i = 0;
        int st=s.size();
    while (i<st/2)
    {
        int temp;
        temp = s[i];
        s[i] = s[st - i - 1];
        s[st - i - 1] = temp;
        i++;
    }
}
};