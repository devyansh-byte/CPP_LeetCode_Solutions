class Solution {
public:
    int minEatingSpeed(vector<int>& arr, int h) {
        int n=arr.size();
        int lo=1;
        int maxele=-1;
        for(int i=0;i<n;i++){
             if(arr[i]>maxele) maxele=arr[i];
        }
        int hi=maxele;
        int ans=hi;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            long long counthour=0;
            for(int i=0;i<n;i++){
                if(arr[i]%mid==0){
                    counthour+=(arr[i]/mid);
                }
                else {
                    counthour+=((arr[i]/mid)+1);
                }
            }
            if(counthour<=h){
                ans=mid;
                 counthour=0;
                hi=mid-1;
            }
            // else if(counthour<h) {
                
                 
            // }
            else{
                  counthour=0;
                   lo=mid+1;
       
            }
        }
        return ans;
    }
};