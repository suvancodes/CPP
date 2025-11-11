#include<iostream>
using namespace std;


class Queue{
    int *arr;
    int currentsize,cap;
    int f;
    int r;
    public:
    Queue(int size){
        cap = size;
        arr = new int(cap);
        f = 0;
        r = -1;
        currentsize = 0;
        
    }
    void push(int val){
        if(currentsize == cap){
            cout<<"Queue is full"<<endl;
            return;
        }
        r = (r+1)%cap;
        arr[r] = val;
        currentsize++;
    }
    void pop(){
        if(currentsize == 0){
            cout<<"Queue is empty"<<endl;
            return;
        }
        f = (f+1)%cap;
        currentsize--;

    }
    bool empty(){
        return currentsize == 0;
    }
    int front(){
        if(empty()) return -1;
        return arr[f];
    }

    void print(){
        while(r != f){
            cout<<arr[f];
            f = (f+1)%cap;
        }
    }
};

struct Queue{
    int *arr;
    int cs,cap,f,r;
    Queue(int size){
        cap = size;
        arr = new int(cap);
        f = 0;
        r = -1;
        cs = 0;
    }
    void push(int val){
        if(cs == cap){
            cout<<"stack if full"<<endl;
        }
        r=(r+1)%cap;
        arr[r] = val;
        cs++;

    }
    void print(){
        while(r != f){
            cout<<arr[f];
            f = (f+1)%cap;
        }
    }
};


int main(){
    Queue qu(6);
 

    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.push(4);
    qu.push(4);
    // qu.pop();
    // qu.pop();
    // qu.push(4);
    // qu.push(5);
    


    // cout<<qu.front()<<endl;
    qu.print();
return 0;
}