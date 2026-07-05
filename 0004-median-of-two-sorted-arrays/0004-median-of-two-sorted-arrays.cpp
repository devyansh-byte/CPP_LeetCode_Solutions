class Solution {
public:
void merged( vector<int> v1, vector<int> v2, vector<int>& v){
    int i=0,j=0,k=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<=v2[j]) v[k++]=v1[i++];
        else v[k++]=v2[j++];
    }
    if(i==v1.size()){
        while(j<v2.size() && k<v.size() ){
            v[k++]=v2[j++];
        }
    }
     else if(j==v2.size()){
        while(i<v1.size() && k<v.size() ){
            v[k++]=v1[i++];
        }
    }
    return;
}
    double findMedianSortedArrays(vector<int>& v1, vector<int>& v2) {
        vector<int> v(v1.size() + v2.size());
        merged(v1,v2,v);
        int n=v.size();
        if(n%2!=0) {
         return v[n/2];
        }    
        else return double(v[n/2]+v[n/2-1])/2;
        return -1;
        }
};