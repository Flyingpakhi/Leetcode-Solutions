class Solution {
public:
    bool checkYear(int year)
{
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;
    return false;
}
     int dayOfYear(string date) {
         int val,val1,summ=0;
        int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        int sum=0,j=0;
        while(j<4){
            sum=sum*10+(date[j]-'0'); 
            j++;
        }
        bool leap=checkYear(sum);
        if(leap){
            arr[1]=29;
        }
        val=(date[5]-'0')*10+(date[6]-'0');
        val1=(date[8]-'0')*10+(date[9]-'0');
        for(int i=0;i<val-1;i++){
            summ=summ+arr[i];
        }
         return summ+val1;
        }
};