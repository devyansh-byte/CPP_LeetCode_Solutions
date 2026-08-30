class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n=arr.size();
         vector<int> suf(n);
         vector<int> pre(n);
         vector<int> ans(n);
         //first calculate multiplication of pre numbers
         pre[0]=1;
         for(int i=1;i<n;i++){
            pre[i]=arr[i-1]*pre[i-1];
         }
         suf[n-1]=1;
            for(int i=n-2;i>=0;i--){
            suf[i]=arr[i+1]*suf[i+1];
         }
        for(int i=0;i<n;i++){
            ans[i]=pre[i]*suf[i];
         }  
return ans;
    }
};