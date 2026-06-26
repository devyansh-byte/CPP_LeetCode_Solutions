class Solution {
public:
    int largestAltitude(vector<int>& arr) {
        int n=arr.size();
        vector<int> v(n+1);
        v[0]=0;
        for(int i=0;i<n;i++){
            v[i+1]=v[i]+arr[i];
        }
        sort(v.begin(),v.end());
        return v[n];
    }
};