class Solution {
public:
    bool isValid(string s) {
        stack<char> l1;
        int n=s.size();
        if(n==1) return false;
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') l1.push(s[i]);
            else{
                 if(l1.size()==0) return false;
                int x =abs((int)s[i]-(int)l1.top());
                if(x>3) return false; 
                else l1.pop();
            }
        }
     if(l1.size()==0) return true;
     else return false;
    }
};