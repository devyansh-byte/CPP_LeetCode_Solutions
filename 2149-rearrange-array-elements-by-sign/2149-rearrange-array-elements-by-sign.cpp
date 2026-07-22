class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans(n);
        int i=0;
        int j=1;
        int x=0;
        while(x<n){
           if(arr[x]>0){
            ans[i]=arr[x];
            i+=2;
           }
           else{
            ans[j]=arr[x];
            j+=2;
           }
           x++;
        }
        return ans;
    
    }
};