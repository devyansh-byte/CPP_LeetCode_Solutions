class Solution {
public:
    bool isIsomorphic(string s, string t) {
   vector<int> v(150,1000);
   int n=s.size();
   int m=t.size();
   if(n!=m) return false;
   for(int i=0;i<n;i++){
    int ch=s[i];
    int ascii=(int)ch;
    if(v[ascii]!=1000){
   if( v[ascii]!=(s[i]-t[i])) return false;
    }
 else v[ascii]=s[i]-t[i];
   }
   vector<int> v1(150,1000);
   for(int i=0;i<n;i++){
    int ch=t[i];
    int ascii=(int)ch;
    if(v1[ascii]!=1000){
   if( v1[ascii]!=(s[i]-t[i])) return false;
    }
 else v1[ascii]=s[i]-t[i];
   }
   return true;
    }
};