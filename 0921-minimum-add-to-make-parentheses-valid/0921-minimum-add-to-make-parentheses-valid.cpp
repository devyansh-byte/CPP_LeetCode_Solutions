class Solution {
public:
    int minAddToMakeValid(string s) {
       stack<char> st;
       int count=0;
       for(int i=0;i<s.size();i++){
        if(s[i]=='('){//opening hai to closing hona pdega
           st.push('(');
        }
        else{//closing aaya
          if(!st.empty()) st.pop();
          else count++;
        }
       }
      if(!st.empty()) count+=st.size();
       return count;
    }
};