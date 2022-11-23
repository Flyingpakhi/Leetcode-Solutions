class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int freq[72]={0};
        int freq1[72]={0};
        for(int i=0;stones[i]!='\0';i++){
            if(stones[i]>='a'&&stones[i]<='z'){
                freq[stones[i]-'a']+=1;
            }
            if(stones[i]>='A'&&stones[i]<='Z'){
                freq[stones[i]-'A'+26]+=1;
            }
        }
        for(int i=0;jewels[i]!='\0';i++){
            if(jewels[i]>='a'&&jewels[i]<='z'){
                freq1[jewels[i]-'a']+=1;
            }
            if(jewels[i]>='A'&&jewels[i]<='Z'){
                freq1[jewels[i]-'A'+26]+=1;
            }
        }
        int count=0;
        for(int i=0;i<72;i++){
            if(freq[i]!=0 && freq1[i]!=0){
                count+=freq[i];
            }
        }
        return count;
    }
};