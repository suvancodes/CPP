#include<iostream>
using namespace std;

// selection sort

// int main(){
//     int arr[] = {4,3,2,5,1};
//     int n = 5;
//     for(int i =0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i]<arr[j]){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j]=temp;

//             }
//         }
//     }
//     for(int i = 0;i<n;i++){
//         cout<<arr[i];
//     }
// }



// insertion sort

// int main(){
//     int arr[] = {4,2,1,5,3};
//     int n = 5;
//     for(int i=0;i<n;i++){
//         int curr = arr[i];
//         int prv = i-1;
//         while(prv>=0 && arr[prv]>curr){
//             arr[prv+1] = arr[prv];
//             prv--;
//         }
//         arr[prv+1] = curr;
//     }
//     for(int i=0;i<n;i++){               
//         cout<<arr[i];
//     }

// }