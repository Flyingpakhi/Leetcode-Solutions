class Solution {
public:
    string numberToWords(int num) {
        long long int n=num;
        long long int limit=1000000000000,curr_hun,t=0;
    if(n==0){
        return ("Zero");
    }
    string mul[]={"","Trillion","Billion","Million","Thousand"};
    
    string first_twenty[]={"","One","Two","Three","Four","Five",
        "Six","Seven","Eight","Nine","Ten","Eleven","Twelve",
        "Thirteen","Fourteen","Fifteen","Sixteen","Seventeen",
        "Eighteen","Nineteen"};
   
    string tens[]={"","Twenty","Thirty","Forty","Fifty",
                    "Sixty","Seventy","Eighty","Ninety"};
    
    if(n<20){
        return (first_twenty[n]);
    }
    string answer="";
    for(long long int i=n;i>0;i%=limit,limit/=1000){
        
        curr_hun=i/limit;
        while(curr_hun==0){
            i%=limit;
            limit/=1000;
            curr_hun=i/limit;
            ++t;
        }
        if(curr_hun>99){
            answer+=(first_twenty[curr_hun/100]+" Hundred ");
        }
        curr_hun=curr_hun%100;
        if(curr_hun>0 && curr_hun<20){
            answer+=(first_twenty[curr_hun]+" ");
        }
        else if(curr_hun%10==0 && curr_hun!=0){
            answer+=(tens[curr_hun/10-1]+" ");
        }
        else if(curr_hun>20 && curr_hun<100){
            answer+=(tens[curr_hun/10-1]+" "+first_twenty[curr_hun % 10]+" ");
        }
        if(t<4){
            answer+=(mul[++t]+" "); 
        }
    }
        //to erase the last " ";
        answer.erase(answer.end()-1);
        return answer;
    }
};