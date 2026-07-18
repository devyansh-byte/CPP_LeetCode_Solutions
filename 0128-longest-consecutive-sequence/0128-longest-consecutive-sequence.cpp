class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        //brute force solution not by hash table.
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int count=1;
          if(n==1) return 1;
          if(n==0) return 0;
          int maxcount=1;
        for(int i=1;i<n;i++){
            if (arr[i] == arr[i - 1]) {
                continue;
            }
            if(arr[i]-arr[i-1]==1 ) count++;
            else {
                count =1;
            }
            if(count>maxcount) maxcount=count;
        }
        return maxcount;
    }
};