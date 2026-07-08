class Solution {
public:
    vector<int> runningSum(vector<int>& arr) {
        int n=arr.size();
        vector <int> v(n);
        v[0]=arr[0];
        for(int i=1;i<n;i++){
            v[i]=v[i-1]+arr[i];
        }
        return v;
    }
};