class Solution {
public:
    int print(int n,int sum1){
        while(n>0){
            int last=n%10;
            sum1=sum1+last;
            n=n/10;
        }
        return sum1;
    }
    int addDigits(int num) {
        int sum=0;
        do{
        num=print(num,sum);
        }while(num>9);
        return num;
        
    }
};