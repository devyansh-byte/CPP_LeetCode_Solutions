class Solution {
public:
    int maxNumberOfBalloons(string s) {
        int n=s.size();
        int b=0; //min 1
        int a=0;  //min 1
        int l=0; //min 2
        int o=0;//min 2
        int n1=0;//min 1
        for(int i=0;i<n;i++){
            if(s[i]=='b') b++;
            if(s[i]=='a') a++;
            if(s[i]=='l') l++;
            if(s[i]=='o') o++;
            if(s[i]=='n') n1++;
        }
        return min({b,a,l/2,o/2,n1});
        
    }
};