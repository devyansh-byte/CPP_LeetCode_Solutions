class Solution {
public:
void merged(vector<int> v1,vector<int> v2,vector<int>&v){ 
  int i=0,j=0,k=0;
   while(i<v1.size() && j<v2.size()){
        if(v1[i]<=v2[j]) v[k++]=v1[i++];
        else v[k++]=v2[j++];
   }
   if(i==v1.size()){
    while(j<v2.size() && k<v.size()) v[k++]=v2[j++];
   }
   if(j==v2.size()){
    while(i<v1.size() && k<v.size()) v[k++]=v1[i++];
   }
return;

}
void sort(vector<int>& v){ // v-> 2,4,3,8,6,1,0;   ->7 element
    int n=v.size();
    if(n==1) return;
int a=n/2;  // 7/2->>3
int b=n-n/2;//7-3->>4
vector<int> v1(a);//2 4 3;
vector<int> v2(b);//8 6 1 0 ;
for(int i=0;i<a;i++){
v1[i]=v[i];
}
   for(int i=0;i<b;i++){
v2[i]=v[i+a];//to get element from remaining vector--> 8 6 1 0
} 

sort(v1);
sort(v2);

merged(v1,v2,v);
 v1.clear();
     v2.clear();
}
    vector<int> sortArray(vector<int>& v) {
sort(v);
return v;
    }
};