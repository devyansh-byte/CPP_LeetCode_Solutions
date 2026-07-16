class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
        vector<int> v1(n);//prev max store here
        vector<int> v2(n);//next max store here.
        v1[0]=-1;
        int prevmax=arr[0];
for(int i=1;i<n;i++){
   if(arr[i]>=prevmax){
    v1[i]=prevmax;
    prevmax=arr[i];
}
else{
    v1[i]=prevmax;
   }
}
v2[n-1]=-1;
int nextmax=arr[n-1];
for(int i=n-2;i>=0;i--){
if(arr[i]>nextmax){
    v2[i]=nextmax;
    nextmax=arr[i];
}
else v2[i]=nextmax;
}
vector<int> v3(n);//it take intersection of both smallest memeber
for(int i=0;i<n;i++){
    if(v1[i]<v2[i]) v3[i]=v1[i];
     else v3[i]=v2[i];
    }
    int count=0;
    for(int i=1;i<n-1;i++){
        if(v3[i]>arr[i]) count+=(v3[i]-arr[i]);
    }
    return count;
    }
};