class Solution {
public:
    bool isPalindrome(string s) {
      for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z') s[i]=s[i]+32;
        if(!((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))){
             s.erase(i,1);
             i--;
        } 
      }
      int i=0;
      int j=s.size()-1;
      while(i<=j){
        if(s[i]!=s[j]) return false;
        else{
             i++;
             j--;
        }
      }
      return true;
    }
};