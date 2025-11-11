// #include<iostream>
// #include<vector>
// #include<string>


// using namespace std;

// class node{
// public:
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next=NULL;
//     }
// };

// class list{
// node* head;
// node* tail;
// public:
//     list(){
//         head=tail=NULL;
//     }
    
//     void push_front(int val){
//         node* newnode= new node(val);
//         if(head==NULL){
//             head=tail=newnode;
//         }
//         else{
//             newnode->next=head;
//             head=newnode;
//         }
//     }

//     void push_back(int val){
//         node* newnode = new node(val);
//         if(head==NULL){
//             head = tail = newnode;
//         }
//         else{
//             tail->next=newnode;
//             tail=newnode;
//         }
//     }


    
//     void pop_front(){
//         node* temp = head;
//         head = head->next;
//         temp -> next = NULL;
//         delete temp;
//     }



//     void pop_back(){
//         node*temp = head;
//         while(temp->next!=tail){
//             temp = temp->next;
//         }
//         temp ->next = NULL;
//         delete temp;
//     }


//     void print(){
//         node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }

//     }

//     void insert(int val, int pos){
//         node* temp = head;
//         if (pos < 0) return;
        
//         if(pos==0) push_front(val);
//         for(int i=0; i < pos-1;i++){
//             if(temp==NULL) {
//                 cout<<"invallid position";
//                 return;
//             }
//             temp=temp->next;
//         }

//         node* newnode = new node(val);
//         newnode->next=temp->next;
//         temp->next=newnode;

//     }

//     void search(int val){
//         node* temp=head;
//         int i =0;
//         while(temp != NULL){
//             if(temp->data==val){
//                 cout<<i;
//                 return;
//             }
//             i++;
//             temp=temp->next;
//         }
//     }

// };
 
// int main(){
//     list li;
//     li.push_back(1);
//     li.push_back(3);
//     li.push_front(0);
//     li.push_back(2);
//     li.pop_back();
//     li.print();
//     return 0;
// }

// class node{
// public:
//     node* prv;
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next = prv = NULL;
//     }
// };

// class dublelist{
//     public:
//     node* head;
//     node* tail;
//     dublelist(){
//         head=tail=NULL;
//     }
//     void push_front(int val){
//     public:    node* newnode = new node(val);
//         if(head == NULL){
//             head = tail = newnode;
//         }
//         else{
//             newnode->next = head;
//             head = newnode;
//         }
//     }
//     void push_back(int val){
//         node* newnode = new node(val);
//         if(head == NULL){
//             head = tail = newnode;
//         }
//         else{
//             node* temp=head;
//             while(temp->next!=NULL){
//                 temp=temp->next;
//                 if(temp == NULL) break;
//             }
//             temp->next = newnode;
//             newnode->next = NULL;
//         }
//     }
//     void pop_front(){
//         node* temp= head;
//         head=head->next;
//         head->prv =NULL;
//         temp->next=NULL;
//         delete temp;
//     }
//     void pop_back(){
//         node* temp=head;
//         node* pre=NULL;

//         while(temp->next!=NULL){
//             pre=temp;
//             temp=temp->next;
//         }
//         pre->next=NULL;
//         temp->next=NULL;
//         temp->prv=NULL;

//     }
//     void print(){
//         node* temp = head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//     }

// };
// int main(){
//     dublelist dll;
//     dll.push_front(1);
//     dll.push_front(2);
//     dll.push_front(3);
//     dll.push_back(3);
//     dll.pop_front();
//     dll.pop_back();
//     dll.print();
// }
// class node{
//     public:
//     node* next;
//     int data;
//     node(int val){
//         data = val;
//         next = NULL;
//     }
// };
// class cirlist{
//     public:
//     node* head = NULL;
//     node* tail = NULL;
//     cirlist(){
//         head = tail = NULL;
//     }
//     void inseartathead(int val){
//         node* newnode = new node(val);
//         if(head == NULL){
//             head = tail =newnode;
//             tail->next = newnode;
//         }
//         else{
//             newnode->next=head;
//             head = newnode;
//             tail ->next = head;
//         }
//     }

//     void inattail(int val){
//         node* newnode = new node(val);
//         if(head == NULL) head = tail = newnode;
//         else{
//             newnode->next = head;
//             tail -> next = newnode;
//         }
//     }

//     void delathead() {
//     if (head == NULL) return; 

//     if (head == tail) {
//         delete head;
//         head = NULL;
//         tail = NULL;
//         return;
//     }

//     node* temp = head;
//     head = head->next;
//     tail->next = head;
//     delete temp;
// }

//     void print(){
//         if(head == NULL) return;
//         cout<< head->data<< "->";
//         node* temp=head->next;
//         while(temp != head){
//             cout<< temp->data<<"->";
//             temp = temp->next;
//         }
//         cout<<temp->data;
//     }

// };
// int main(){
//     cirlist cll;
//     cll.inseartathead(2);
//     cll.inseartathead(1);
//     cll.inattail(6);
//     cll.delathead();
//     cll.print();
// }
