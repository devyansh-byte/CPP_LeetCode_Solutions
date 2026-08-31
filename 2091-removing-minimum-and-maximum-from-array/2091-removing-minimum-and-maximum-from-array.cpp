class Solution {
public:
    int minimumDeletions(vector<int>& arr) {
        int n=arr.size();
        if(n==1) return 1;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int minidx=0;
        int maxidx=0;
        for(int i=0;i<n;i++){
            if(arr[i]>maxi) {
                maxi=arr[i];
                maxidx=i+1;
            }
            if(arr[i]<mini) {
                mini=arr[i];
                minidx=i+1;
            }
        }
        //know here i find idx of both minimum and max element.
        int calmax=n-maxidx+1;
        int calmin=n-minidx+1;
       int count1=max(maxidx,minidx);
      int count2=max(calmax,calmin);
      int count3=0;
       if(minidx<maxidx) count3=minidx+calmax;
       else count3=maxidx+calmin;
return min({count1,count2,count3});
    }
};