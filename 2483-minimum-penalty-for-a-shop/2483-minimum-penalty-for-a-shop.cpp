class Solution {
public:
    int bestClosingTime(string s) {
        int n=s.size();
        vector <int> v1(n+1); //for yes
        vector <int> v2(n+1); //for no
        //first suffix yes
      v1[n]=0;
        for(int i=n-1;i>=0;i--){
           if(s[i]=='Y') v1[i]=v1[i+1]+1;
           else v1[i]=v1[i+1];
        }
        v2[0]=0;
        for(int i=0;i<n;i++){
            if(s[i]=='N') v2[i+1]=v2[i]+1;
            else v2[i+1]=v2[i];
        }
        for(int i=0;i<n+1;i++){
         v1[i]=v1[i]+v2[i];
        }
        int check=777777;
        int idx=0;
        for(int i=0;i<n+1;i++){
            if(v1[i]<check){
         check=v1[i];
         idx=i;
            } 
        }
        return idx;
    }
};
    