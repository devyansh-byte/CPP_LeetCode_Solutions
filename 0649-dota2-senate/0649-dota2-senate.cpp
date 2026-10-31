class Solution {
public:
    string predictPartyVictory(string s) {
        int n=s.size();
        // if(n==1 || n==2){
        //     if(s[0]=='R')  return "Radiant";
        //     else return "Dire";
        // } 
     
        queue<int> q;
        queue<int> d;
        queue<int> r;
        for(int i=0;i<n;i++){
            q.push(i);
            if(s[i]=='R') r.push(i);
            else d.push(i);
        }
        while (!q.empty()){
            if(s[q.front()]=='X') q.pop(); 
       else if(s[q.front()]=='R'){
            if(d.size()==0) return "Radiant";
            else{
             s[d.front()]='X';
            d.pop();
            r.push(r.front());
            r.pop();
             q.push(q.front());
        q.pop(); 
            }
        }
        else{
                  if(r.size()==0) return "Dire";
            else{
             s[r.front()]='X';
            r.pop();
            d.push(d.front());
            d.pop();
             q.push(q.front());
        q.pop(); 
        }
        }
       
        }
        return " ";
    }
};