class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n=arr.size();
        vector<int> pre(n);
         vector<int> suf(n);
          vector<int> ans(n);
          pre[0]=1;
        suf[n-1]=1;
      for(int i=1;i<n;i++){
          pre[i]=pre[i-1]*arr[i-1];
          suf[n-1-i]=suf[n-i]*arr[n-i];
           }
             for(int i=0;i<n;i++){
          ans[i]=pre[i]*suf[i];
           }
           return ans;

    }
};