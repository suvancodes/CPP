#include<iostream>
using namespace std;

// using OPPS 

// class node{
//     public:
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// class Queue{
//     node *head;
//     node *tail;
//     public:
//     Queue(){
//         head = NULL;
//         tail = NULL;
//     }
//     void push(int val){
//         node* newnode = new node(val);
//         if(head == NULL){
//             head = tail = newnode;
//         }
//         tail->next = newnode;
//         tail = newnode;


//     }

//     void pop(){
//         if(head == NULL){
//             cout<<"Queue is empty ";

//         }
//         node* temp = head;
//         head = temp->next;
//         cout<<temp->data<<"is deleted"<<endl;
//         delete(temp);
//     }


 
//     void front(){
//         cout<<"front is "<<head-> data<<endl;
//     }
//     void print(){
//         node* temp = head;
//         while(temp!= NULL){
//             cout<<temp->data;
//             temp = temp->next;
//         }
//     }
// };

// USING STRUCT 

// struct Node{
//     int data;
//     Node* next;
//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// struct Queue{
//     Node* head;
//     Node* tail;
//     Queue(){
//         head = NULL;
//         tail = NULL;
//     }
//     void push(int val){
//         Node* newnode = new Node(val);
//         if(head == NULL){
//             head = tail = newnode;
//         }
//         tail->next = newnode;
//         tail = newnode;

//     }
//     void pop(){
//         if(head == NULL){
//             cout<<"No element in this queue"<<endl;
//         }
//         Node* temp = head;
//         head = temp->next;
//         delete(temp);
//     }
//     void front(){
//         cout<<head->data<<endl;


//     }
//     void print(){
//         Node* temp = head;
//         while(temp!=NULL){
//             cout<<temp->data;
//             temp=temp->next;
//         }

//     }
// };




int main(){
    Queue qu;
    qu.push(2);
    qu.push(1);
    qu.push(3);
    qu.push(1);
    qu.push(1);
    qu.push(1);
    qu.pop();
    qu.pop();
    qu.front();
    qu.print();

    return 0;
}