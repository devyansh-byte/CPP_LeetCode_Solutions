class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        vector<int> v(2);
        int lo=0;
        int hi=n-1;
        while(lo<=hi){
           // int mid=lo+(hi-lo)/2;
            if(arr[lo]+arr[hi]==target){
                v[0]=lo+1;
                v[1]=hi+1;
                break;
            }
            else if(arr[lo]+arr[hi]<target){
                lo++;
            }
            else hi--;
        }
        return v;
    }
};