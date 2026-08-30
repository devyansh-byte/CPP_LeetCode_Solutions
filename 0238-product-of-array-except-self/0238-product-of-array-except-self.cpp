class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n=arr.size();
         vector<int> pre(2*n);
         //first calculate multiplication of pre numbers
         pre[0]=1;
         for(int i=1;i<n;i++){
            pre[i]=arr[i-1]*pre[i-1];
         }
         pre[2*n-1]=1;
         int m=n-1;
            for(int i=2*n-2;i>=n;i--){
            pre[i]=arr[m]*pre[i+1];
            m--;
         }
          for(int i=0;i<n;i++){
           pre[i]=pre[i]*pre[n+i];
         }
            for(int i=n;i<2*n;i++){
            pre.pop_back();
         }
return pre;
    }
};