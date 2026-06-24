class Solution {
public:
void merged(vector<int> v1,vector<int> v2,vector<int>&res){ 
int i=0,j=0,k=0;
while(i<v1.size() && j<v2.size()){
    if(v1[i]<v2[j]){
        res[k]=v1[i];
        k++;
        i++;
    }
    else{
         res[k]=v2[j];
         k++;
         j++;
    }
}

if(i==v1.size()){//means v1 is full
while(k<res.size() && j<v2.size()){
    res[k]=v2[j];
    j++;
    k++;
}
}
else if(j==v2.size()){
   while(k<res.size() && i<v1.size()){
    res[k]=v1[i];
    i++;
    k++;
} 
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
}
    vector<int> sortArray(vector<int>& v) {
sort(v);
return v;
    }
};