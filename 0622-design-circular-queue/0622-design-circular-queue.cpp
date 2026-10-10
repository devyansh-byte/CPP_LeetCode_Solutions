class MyCircularQueue {
public:
int b;
int f;
int s;
int c;
vector<int> arr;//to make it use globally..but fixed sizee???
    MyCircularQueue(int k) { //behave as a constructor.
    b=f=s=0; //constructor hai to intialised to zero.
    c=k; //to use capacity/size globally  as k bs isme hi ho skta use.
  vector<int> v(k); //for fixed size first make tempor vector then copy it size to arr.
     arr=v;
    }
    
    bool enQueue(int value) { //push
        if(s==c) return false;
        arr[b]=value;
        b++;
        if(b==c) b=0;
        s++;
        return true;
    }
    
    bool deQueue() { //pop
        if(s==0) return false;
        f++;
        if(f==c) f=0;
        s--;
        return true;
    }
    
    int Front() { 
        if(s==0) return -1;
        return arr[f];
    }
    
    int Rear() {
           if(s==0) return -1;
           if(b==0) return arr[c-1];
        return arr[b-1];
    }
    
    bool isEmpty() {
        if(s==0) return true;
        else return false;
    }
    
    bool isFull() {
        if(s==c) return true;
        else return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */