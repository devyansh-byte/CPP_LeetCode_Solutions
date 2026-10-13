class Solution {
public:
    long long maxAlternatingSum(vector<int>& arr) {
        int n=arr.size();
           for(int i=0;i<n;i++){
           if(arr[i]<0) arr[i]=abs(arr[i]);
     }
        sort(arr.begin(),arr.end());
        long long pos=0;
        long long neg=0;
     for(int i=0;i<n;i++){
 if(i<n/2) neg+=arr[i]*arr[i];
 else pos+=arr[i]*arr[i];
     }
     return pos-neg;
    }
};