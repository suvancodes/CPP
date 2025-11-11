#include<iostream>
#include<stdlib.h>
using namespace std;
// struct node{
//     node* next;
//     int data;

//     node(int x){
//         data = x;
//         next = NULL;
//     }
// };

// void push(node*& head,int val){
//     node* newnode = new node(val);
//     node* temp = head;
//     if(head==NULL){
//         head = newnode;
//     }
//     else{
        
//         while(temp->next!=NULL){
//             temp = temp->next;
//         }
//         temp->next = newnode;
//         newnode->next = NULL;
//     }
// }

// void print_linked(node*& head){
//     node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL";
// }

// void delete_list(node* head){
//     node*temp = head;
//     while(temp->next->next!=NULL){
//         temp = temp->next;
//     }
//     temp ->next = NULL;
//     delete temp;
// }

// int main(){
//     node* head =NULL;
//     push(head,1);
//     push(head,2);
//     push(head,3);
//     delete_list(head);
//     print_linked(head);
//     return 0;
// }

// int main(){
//     node *start,*temp;
//     start = (node*)malloc(sizeof(node));
//     start = NULL;
//     temp = (node*)malloc(sizeof(node))
//     temp->data = 10;
//     temp->next = NULL;
//     start = temp;
//     while(temp!=NULL){
//         cout<<temp->data;
//         temp = temp->next;
//     }
// }


struct node{
    int data;
    node* next;

    node(int x){
        data = x;
        next = NULL;
    }
};

