class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        sort(s.begin(),s.end());
        string a=s[0];
        string b=s[s.size()-1];
        if(a[0]!=b[0]) return "";
        string m;
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i]){
                m.push_back(a[i]);
            }
            else break;
            
        }
        return m;
    }
};