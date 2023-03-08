class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
      if(piles.size()>h){
          cout<<"help"<<endl;
          return 0;
      }
        int maxVal=*max_element(piles.begin(),piles.end());
        long long s=1;
        long long e=maxVal;
        long long res=maxVal;
        while(s<=e){
            long long mid=s+(e-s)/2;
            long long sum=0;
            for(long long j=0;j<piles.size();j++){
                long long m=ceil(piles[j]/double(mid));
                sum+=m;
                
            }
            if(sum<=h){
                if(res>mid){
                res=mid;
                }
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return int(res);
    }
};