#include <iostream>
#include <vector>
#include <stack>
using namespace std;



                // stack using linked list






//                 //satck in vector
// class Stack{
//     vector<int> v;
//     public:
//     void push(int val){
//         v.push_back(val);
//     }
//     int top(){
//         return v[v.size()-1];
//     }
//     void pop(){
//         v.pop_back();
//     }
//     bool empty(){
//         return (v.size()==0);
//     }
// };

// int main(){
//     Stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     while(!s.empty()){
//         cout<< s.top()<<" ";
//         s.pop();
//     }
//     cout<<endl;
// return 0;
// }

//                             Valid Parentheses

// bool pra(vector<char> s){
//     int n= s.size();
//     stack<char> st;
//     for(int i=0;i<n; i++){
//         if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
//         else{
//             if(st.empty()) return false;
//             else if((st.top()=='(' && s[i]==')') || (st.top()=='{' && s[i]=='}') || (st.top()=='[' && s[i]==']')) st.pop();
//             else return false;
//         }

//     }
//     return true;
// }
// int main(){
//     vector<char> s = {'(','[','{','}',']',']'};
//     if(pra(s)) cout<< "Valid Parentheses ";
//     else cout<<"not Valid Parentheses ";
// }

// stock span

// vector<int> span(vector<int> arr, vector<int> &ans){
//     int n=arr.size();
//     stack<int> s;
//     for(int i=0; i < n; i++){
//         while(s.size()> 0 && arr[i] >= arr[s.top()]){
//             s.pop();
//         }
//         if(s.empty()){
//             ans.push_back(i+1);

//         }

//         else ans.push_back(i-s.top());
//         s.push(i);
//     }
//     return {ans};
// }

// int main(){
//     vector<int> arr={34,83,48,60,14};
//     vector<int> ans;
//     span(arr, ans);
//     for(int i:ans){
//         cout<<i<<endl;
//     }
// }

// next greter element

// int main(){
//     vector<int> arr={4, 5, 2, 10};
//     int n=arr.size();
//     vector<int> ans(n,-1);
//     stack <int>s;

//     for(int i=n-1; i >= 0; i--){
//         while(!s.empty() && s.top() < arr[i]){
//             s.pop();
//         }
//         if(!s.empty()) ans[i]=s.top();
//         s.push(arr[i]);
//     }
//     for(int i=0; i<n; i++){
//         cout<< ans[i]<<" ";
//     }
// }

// privous smaller element

// int main(){
//     vector<int> arr={3,1,0,8,6};
//     int n=arr.size();
//     vector<int> ans(n,-1);
//     stack<int> s;
//     for(int i=n-1; i > 0; i--){
//         while(!s.empty() && s.top() > arr[i]){
//             s.pop();
//         }
//         if(!s.empty()) ans[i]= s.top();
//         s.push(arr[i]);
//     }
//     for(int i=0; i<n; i++){
//         cout<< ans[i]<<" ";
//     }
// }

// traping rain weater(HARD)
//  NAIVE APPROCH

// int main(){
//     vector<int> hi={4,2,0,3,2,5};
//     int ws=0;
//     int n = hi.size();
//     for(int i = 0; i < n; i++){
//         int nh=0;
//         int lm = 0,rm = 0;
//         for (int r = i; r >= 0; r--) {
//             rm = max(rm, hi[r]);
//         }

//         for (int l = i; l < n; l++) {
//             lm = max(lm, hi[l]);
//         }
//         nh = min(rm, lm);
//         ws=ws+(nh-hi[i]);
//     }
//     cout<<ws;
// }

// better approch

// int main(){
//     vector<int> hi={4,2,0,3,2,5};
//     int n=hi.size();
//     vector<int> lm;
//     vector<int> rm;
//     int l=hi[0];
//     int r=hi[n-1];
//     int ans=0;
//     for(int i=0; i<n; i++){
//         l=max(l,hi[i]);
//         lm.push_back(l);
//     }
//     for(int i=n-1; i>=0; i--){
//         r=max(r,hi[i]);
//         rm.push_back(r);
//     }
//     reverse(rm.begin(),rm.end());

//     for(int i=0; i<n;i++){
//         ans=ans+(min(lm[i],rm[i])-hi[i]);
//     }
//     cout<<ans;
// }

// largest rectangle in a historygram
//  brout force

// int main(){
//     vector<int> arr={2,1,5,6,2,3};
//     int marea=0;
//     int n=arr.size();
//     for(int i=0; i<n; i++){
//         int hi=INT_MAX;
//         for(int j=i;j < n; j++){
//             hi=min(hi,arr[j]);
//             int wid=j-i+1;
//             int carea=hi*wid;
//             marea= max(carea,marea);
//         }

//     }
//     cout<< marea;
// }

// make a stack using linked list

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// class stack{
//     Node* top;
//     public:
//     stack(){
//         top=NULL;
//     }
//     void push(int val){
//         Node* n=new Node(val);
//         if(!n) {
//             cout<<"stack overflow"<<endl;
//             return;
//         }
//         n->next=top;
//         top=n;
//     }
//     void pop(){
//         if(top==NULL){
//             cout<<"stack underflow"<<endl;
//             return;
//         }
//         Node* todelete=top;
//         top=top->next;
//         delete todelete;
//     }
//     int peek(){
//         if(top==NULL){
//             cout<<"stack is empty"<<endl;
//             return -1;
//         }
//         return top->data;
//     }
//     bool empty(){
//         return top==NULL;
//     }
// };

// struct node{
//     node* next;
//     int data;
//     node(int val){
//         int data = val;
//         next = NULL;
//     }
// };

// struct stack
// {
//     node* top;
// };
// node* top = NULL;
// void push(int val){
//     node* newnode = new node(val);
//     newnode->next=top;
//     top = newnode;
// }
// void pop(){
//     node* temp=top;
//     top = temp->next;
//     delete temp;
// }
// int peek(){
//     return top->data;
// }
// int main(){
//     push(10);
//     push(20);
//     push(30);
//     pop();
//     cout<<peek();
// }

// IMPLEMENT A CIRCULAR QUEUE USING LINKED LIST

// #include <iostream>
// using namespace std;
// struct node{
//     int data;
//     node *next;
//     node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// struct queue{
//     node *front;
//     node *rear;
//     queue(){
//         front = NULL;
//         rear = NULL;
//     }
//     void enqueue(int val){
//         node *n = new node(val);
//         if (!n){
//             cout << "queue overflow" << endl;
//             return;
//         }
//         if (front == NULL){
//             front = n;
//             rear = n;
//             rear->next = front;
//             return;
//         }
//         rear->next = n;
//         rear = n;
//         rear->next = front;
//     }
//     void dequeue(){
//         if (front == NULL){
//             cout << "queue underflow" << endl;
//             return;
//         }
//         if (front == rear){
//             node *todelete = front;
//             front = NULL;
//             rear = NULL;
//             delete todelete;
//             return;
//         }
//         node *todelete = front;
//         front = front->next;
//         rear->next = front;
//         delete todelete;
//     }
//     int peek(){
//         if (front == NULL){
//             cout << "queue is empty" << endl;
//             return -1;
//         }
//         return front->data;
//     }
//     bool empty(){
//         return front == NULL;
//     }
//     int tail(){
//        if (rear == NULL){
//             cout << "queue is empty" << endl;
//             return -1;
//         } 
//         return rear->data;
//     }
// };

// int main(){
//     queue q;
//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.dequeue();
//     cout << q.peek()<<endl;
//     cout << q.tail();
// }


int find_pvt(int arr[],int st,int end){
    int indx = st-1;
    int pvt = arr[end];
    for(int i=st;i<end;i++){
        if(pvt>arr[i]){
            indx++;
            swap(arr[i],arr[indx]);
        }
    }
    indx++;
    swap(arr[indx],arr[end]);
    return indx;
}

void QuickSort(int arr[],int st,int end){
    if(st<end){
        int pvtidx = find_pvt(arr,st,end);
        QuickSort(arr,st,pvtidx-1);
        QuickSort(arr,pvtidx+1,end);
    }
}


int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    QuickSort(arr, 0, n - 1);

    cout << "After sorting:  ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}






void marge(int arr[],int st,int mid,int end){
    int i = st;
    int j = mid+1;
    vector<int> temp;
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int k=0;k<temp.size();k++){
        arr[k+st] = temp[k];
    }
}

void marge_sort(int arr[],int st,int end){
    if(st<end){
        int mid = st + (end-st)/2;
        marge_sort(arr,st,mid);
        marge_sort(arr,mid+1,end);
        marge(arr,st,mid,end);
    }
}




int main() {
    int arr[] = {5, 2, 8, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    marge_sort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}