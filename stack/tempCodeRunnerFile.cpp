


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