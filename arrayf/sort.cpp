#include<iostream>
#include <vector>
using namespace std;
                // bubble sort
                // take a pair 
                //swap the larger element of this pair with smaller element of this pair
// int main(){
//     vector <int> arr={4,3,2,5,1};
//     int n=arr.size();
//     for(int i=0;i<n-1;i++){             //first value of the pair 
//         for(int j=0;j<n-i-1;j++){         //2nd value of the pair 
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);     //swaping values
//             }
//         }
//     }
//     for(int i=0;i<n;i++){               //get sorted array
//         cout<<arr[i];
//     }
// return 0;
// }


            //SELECTION SORT
            //swap a smallest element form unsorted to largest element


// int main(){
//     vector <int> arr={4,3,2,5,1};
//     int n=arr.size();
//     for (int i=0; i<n-1; i++){
//         for (int j=i+1;j<n;j++){
//             if (arr[j]<arr[i]){
//                 swap(arr[j],arr[i]);
//             }
//         }
//     }
//     for(int i=0;i<n;i++){               //get sorted array
//         cout<<arr[i];
//     }
// }



// int main(){
//     int arr[] = {4,2,1,5,3};
//     int n = 5;
//     for(int i = 0;i<n;i++){
//         int curr = arr[i];
//         int prv = i-1;
//         while(prv>=0 && arr[prv]>curr){
//             arr[prv+1] = arr[prv];
//             prv--;
//         }
//         arr[prv+1] = curr;
//     }
//     for(int i=0;i<n;i++){               //get sorted array
//         cout<<arr[i];
//     }
// }


                //SELECTION SORT->Using Array

// int main(){
//     int arr[] = {4,3,2,5,1};
//     int n = 5;
//     for(int i=0;i<n;i++){
//         for(int j = i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j]= temp;
//             }
//         }
//     }
//     for(int i = 0;i<n;i++){
//         cout<<arr[i];
//     }
// }





                        // sort a array with 0,1 and 2
                        //brute force
// int main() {
//     vector <int> arr={2,0,2,1,1,0,1,2,0,0};
//     int n= arr.size();
//     int zc=1,oc=1,tc=1;
//     for(int i=0 ;i<n; i++){
//         if(arr[i]==0){
//             zc++;
//         }
//         else if(arr[i]==1){
//             oc++;
//         }
//         else{
//             tc++;
//         }
//     }
//     for(int i=0;i<zc;i++){
//         arr[i]=0;
//     }
//     for(int i=zc-1;i<zc+oc;i++){
//         arr[i]=1;
//     }
//     for(int i=zc+oc-1;i<zc+oc+tc;i++){
//         arr[i]=2;
//     }
    // for (int i=0;i<n ;i++){
    //     cout<<arr[i]<< " ";
    // }
// }


                        //dutch national flag algorithm

                        // more in page -> march 6-10

// int main(){
//     vector <int> arr={2,0,1,0,2,1,0,2,1};
//     int n=arr.size();
//     int low=0,mid=0, hi=n-1;
//     while(mid<hi){
//         if(arr[mid]==2){
//             swap(arr[mid],arr[hi]);
//             hi--;
//         }
//         else if(arr[mid]==1){
//             mid++;
//         }
//         else{
//             swap(arr[low],arr[mid]);
//             low++;
//             mid++;
//         }
//     }
//     for (int i=0;i<n ;i++){
//         cout<<arr[i]<< " ";
//     }
// }



                // marge sort




// void marge(int arr[],int st,int mid,int end){
//     vector<int>temp;
//     int i = st;
//     int j = mid+1;

//     while(i <= mid && j <= end){
//         if(arr[i]<arr[j]){
//             temp.push_back(arr[i]);
//             i++;
//         }
//         else{
//             temp.push_back(arr[j]);
//             j++;
//         }
//     }
//     while(i<=mid){
//         temp.push_back(arr[i]);
//         i++;
//     }

//     while (j<=end){
//         temp.push_back(arr[j]);
//         j++;
//     }
//     for (int k = 0; k < temp.size(); k++) {
//         arr[st + k] = temp[k];
//     }
    

// }




// void marge_sort(int arr[],int st,int end){
//     if(st<end){
//         int mid = st+(end-st)/2;
//         marge_sort(arr,st,mid);
//         marge_sort(arr,mid+1,end);
//         marge(arr,st,mid,end);

//     }
// }

// void marge(int arr[],int st,int mid,int end){
//     int i = st;
//     int j = mid+1;
//     vector<int> temp;
//     while(i<=mid && j<=end){
//         if(arr[i]<arr[j]){
//             temp.push_back(arr[i]);
//             i++;
//         }
//         else{
//             temp.push_back(arr[j]);
//             j++;
//         }
//     }
//     while(i<=mid){
//         temp.push_back(arr[i]);
//         i++;
//     }
//     while(j<=end){
//         temp.push_back(arr[j]);
//         j++;
//     }

//     for(int k=0;k<temp.size();k++){
//         arr[k+st] = temp[k];
//     }
// }

// void marge_sort(int arr[],int st,int end){
//     if(st<end){
//         int mid = st + (end-st)/2;
//         marge_sort(arr,st,mid);
//         marge_sort(arr,mid+1,end);
//         marge(arr,st,mid,end);
//     }
// }




// int main() {
//     int arr[] = {5, 2, 8, 1, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     marge_sort(arr, 0, n - 1);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) cout << arr[i] << " ";
//     cout << endl;
//     return 0;
// }

// int Find_pvt(int arr[],int st, int end){
//     int indx =st -1;
//     int pvt = arr[end];
//     for(int j = st;j<end;j++){
//         if(arr[j]<pvt){
//             indx++;
//             swap(arr[j],arr[indx]);
//         }
//     }
//     indx++;
//     swap(arr[indx],arr[end]);
//     return indx;
// }

// void QuickSort(int arr[], int st, int end) {
//     if(st<end){
//         int pvi = Find_pvt(arr, st, end);
//         QuickSort(arr,st,pvi-1);
//         QuickSort(arr,pvi+1,end);

//     }
// }



// int main() {
//     int arr[] = {10, 7, 8, 9, 1, 5}; // sample input
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Before sorting: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     QuickSort(arr, 0, n - 1);

//     cout << "After sorting:  ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     return 0;
// }

// int find_pvt(int arr[],int st,int end){
//     int indx = st-1;
//     int pvt = arr[end];
//     for(int i=st;i<end;i++){
//         if(pvt>arr[i]){
//             indx++;
//             swap(arr[i],arr[indx]);
//         }
//     }
//     indx++;
//     swap(arr[indx],arr[end]);
//     return indx;
// }

// void QuickSort(int arr[],int st,int end){
//     if(st<end){
//         int pvtidx = find_pvt(arr,st,end);
//         QuickSort(arr,st,pvtidx-1);
//         QuickSort(arr,pvtidx+1,end);
//     }

// }

// int main() {
//     int arr[] = {10, 7, 8, 9, 1, 5}; // sample input
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Before sorting: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     QuickSort(arr, 0, n - 1);

//     cout << "After sorting:  ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     return 0;
// }






// HEAP SORT

#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    printArray(arr, n);
    heapSort(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
