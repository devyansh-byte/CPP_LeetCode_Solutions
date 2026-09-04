class Solution {
public:
    int firstStableIndex(vector<int>& arr, int k) {
        int n=arr.size();
       vector<int> mn(n);
       mn[n-1]=arr[n-1];
       for(int i=n-2;i>=0;i--){
        mn[i]=min(mn[i+1],arr[i]);
       }
     int mx=arr[0];
     for(int i=0;i<n;i++){
         mx=max(mx,arr[i]);
            if (mx-mn[i]<=k) return i;
     }
return -1;
    }
};