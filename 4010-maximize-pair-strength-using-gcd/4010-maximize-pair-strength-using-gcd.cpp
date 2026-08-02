class Solution {
public:
    long long maxPairStrength(vector<int>& arr) {
        int n=arr.size();
        long long max=0;
        long long tempmax=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
               tempmax=lcm((long long)arr[i], (long long)arr[j])/(long long)gcd(arr[i],arr[j]);
               if(max<tempmax) max=tempmax;
            }
        }
        return max;

    }
};