#include <iostream>

using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int** mat1 = (int**)malloc(sizeof(int)*n*n);
//     int** mat2 = (int**)malloc(sizeof(int)*n*n);
//     int** sum = (int**)malloc(sizeof(int)*n*n);
//     for(int i =0; i < 3; i++){
//         mat1[i] = (int*)malloc(sizeof(int)*n);
//         mat2[i] = (int*)malloc(sizeof(int)*n);
//         sum[i] = (int*)malloc(sizeof(int)*n);
//     }
//     cout<< "enter element";
//     for(int i =0;i<3;i++){
//         for(int j =0;j<3;j++){
//             cin>>mat1[i][j];
//         }
//     }

//     for(int i =0;i<3;i++){
//         for(int j =0;j<3;j++){
//             cin>>mat2[i][j];
//         }
//     }
//     for(int i =0;i<3;i++){
//         for(int j =0;j<3;j++){
//             sum[i][j] = mat1[i][j]+mat2[i][j];
//         }
        
//     }

//     for(int i =0;i<n;i++){
//         for(int j = 0;j<n;j++){
//             cout<<sum[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }


// #include <iostream>
// #include <iomanip>
 
// #include <string>
// using namespace std;

// // // Define structure
// struct Student {
//     int roll;
//     string name;
//     float marks[3];
//     float average;
// };

// int main() {
//     int n = 3;
//     Student* students = (Student *)malloc(n * sizeof(Student));
//     for (int i = 0; i < n; i++){
//         cout << "Enter details for student " << i + 1 << ":\n";

//         cout << "Roll Number: ";
//         cin >> students[i].roll;
//         cin.ignore();
//         cout << "Name: ";
//         getline(cin, students[i].name);
//         float sum = 0;
//         cout << "Enter marks for 3 subjects: ";
//         for (int j = 0; j < 3; j++) {
//             cin >> students[i].marks[j];
//             sum += students[i].marks[j];
//         }

//         students[i].average = sum / 3.0f;
//         cout << endl;
//     }
//     cout << "\n--Student Details--\n";
//     for (int i = 0; i < n; i++) {
//         cout << "Student " << i + 1 << ":\n";
//         cout << "Roll Number: " << students[i].roll << endl;
//         cout << "Name: " << students[i].name << endl;
//         cout << "Marks: ";
//         for (int j = 0; j < 3; j++)
//             cout << students[i].marks[j] << " ";
//         cout << "\nAverage: " << fixed << setprecision(2) << students[i].average << "\n\n";
//     }
//     free(students);


//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;  
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
//     int mid = n/2;

//     int *arr = (int *)malloc(n * sizeof(int));

//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
    
//     for (int i = 0; i < mid; i++)
//     {
//         arr[i]+=2;
//     }
//     for (int i = mid; i < n; i++)
//     {
//         arr[i]-=2;
//     }

//     cout << "the updated arr after inc 2: ";
//     for (int i = 0; i < mid; i++)
//     {
//         cout << arr[i] << "  ";
//     }
//     cout<< endl;
//     cout << "the updated arr after dec 2: ";
//     for (int i = mid; i < n; i++)
//     {
//         cout << arr[i] << "  ";
//     }
//     free(arr);
    
    
//     return 0;
// }

#include <iostream>
using namespace std;

struct node{
    int data ;
    node* next;

};

int main (){
    node* head=(node*)malloc(sizeof(node));
    node* second=(node*)malloc(sizeof(node));
    node* third=(node*)malloc(sizeof(node));
    head->data=1;
    head->next=second;
    second-> data =2;
    second->next= third;
    third->data=3;
    third->next=nullptr;
    node* temp=head;
    node* temp1 = head;
    
    while(temp1->next->next!=NULL){
      temp1=temp1->next;
    }
    temp1->next=NULL;


    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    
    cout<<"null\n";
    free(head);
    free(second);
    free(third);
    return 0;
    
}


