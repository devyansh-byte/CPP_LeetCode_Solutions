class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans(n);
        if(n==1) {
            ans[0]=-1;
            return ans;
        }
        if(n==2){
            ans[0]=arr[1];
            ans[1]=-1;
            return ans;
        }
        for(int i=0;i<n-1;i++){
            int max=-1;
      for(int j=i+1;j<n;j++){
         if(arr[j]>max) max=arr[j];
      }
      ans[i]=max;
        }
        ans[n-1]=-1;
        return ans;
    }
};