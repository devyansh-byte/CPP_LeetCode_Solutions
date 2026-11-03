class Solution {
public:
    int minMoves(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int ans=0;
        for(int i=0;i<n-1;i++){
            ans+=arr[n-1]-arr[i];
        }
        return ans;
    }
};