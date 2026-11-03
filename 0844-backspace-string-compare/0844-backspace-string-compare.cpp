class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a="";
        string b="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
        if(a.size()>0) a.pop_back();  
            }
            else a+=s[i];
        }
         for(int i=0;i<t.size();i++){
            if(t[i]=='#'){
                if(b.size()>0) b.pop_back(); 
            } 
            else b+=t[i];
        }
        if(a.size()!=b.size()) return false;
         for(int i=0;i<b.size();i++){
            if(a[i]!=b[i]) return false;
        }
        return true;
    }
};