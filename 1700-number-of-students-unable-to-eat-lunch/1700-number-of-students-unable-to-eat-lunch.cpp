class Solution {
public:
    int countStudents(vector<int>& stu, vector<int>& food) {
        //stu ko queue mae and food ko stack ke reverse mae
        reverse(food.begin(),food.end());
        stack<int , vector<int>> st(food); //acc to question stack bna diya.
        queue<int> q;
        int n=food.size();
        for(int i=0;i<n;i++){
            q.push(stu[i]);
        }
        //stack and queue ka kaam hogya..
        int count=0;
 
        while(!(st.empty())){
            if(q.front()==st.top()){//mn ka food milgya so food--and stu--;
             st.pop();
             q.pop();
          count=0;
            }
            else{//mn ka food nahi hai.
               int m=q.front();
               q.pop();
               q.push(m);
               count++;
    
               if(count==q.size()) break;
            }
        }
        return count;

    }
};