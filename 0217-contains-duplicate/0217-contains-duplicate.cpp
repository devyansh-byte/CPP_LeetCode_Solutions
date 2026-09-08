class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]==0) return true;
        }
        return false;
    }
};