                    //binary search     O(log(n))

        // 1. find start end and mid
        // 2. find the perfect logic to to half the search space
        // 3. write the code such as everytime answer will be found in the mid of the array
        
#include<iostream>
#include <vector>
using namespace std;
 
// int main(){
//     vector <int> arr={-1,0,3,4,5,9};
//     int tar;
//     cin>>tar;
//     int n=arr.size();
//     int st=0,end=n-1;
//     while(st<=end){
//         int mid=st+(end-st)/2;    //<-<- use this to find mid don't use this ->mid=(st+end)/2
//         if(tar>arr[mid]){
//             st=mid+1;        //2nd half
//         }
//         else if(tar<arr[mid]){
//             end=mid-1;       //1st half
//         }
//         else{
//             cout<<mid;       //answer
//             break;
//         }
// //     }return 0;
// // }


//                     // stady recuraive binary search after stady recursion



//                     //
//                     //search in rotated sorted array

// int main(){
//     vector <int> arr={5,1,3};
//     int tar=5;
//     int st =0;
//     int n=arr.size();
//     int end=n-1;
//     while(st<=end){
//         int mid=st+(end-st)/2;
// 		if(tar==arr[mid]){
// 			cout<<mid;
// 			break;
// 		}
//         if(tar>=arr[st] && tar<=arr[mid]){
// 			end=mid-1;
//         }
// 		else{
// 			st=mid+1;
// 		}
//     }                      
// }


                    // peak index in mountain array

                    //brout force using liner search

// int main(){
//     vector <int> arr={3,4,5,6,1,2};
//     int n=arr.size();
//     for(int mid=0;mid<n;mid++){
//         if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
//             cout<<mid;
//             break;
//         }
//     }
// }

                //using binary search



// int main(){
//     vector <int> arr={3,4,5,6,1,2};
//     int n=arr.size();
//     int st=0,end =n-1;
//     while(st<=end){
//         int mid = st + (end - st)/2;
//         if(arr[mid]>=arr[mid+1] && arr[mid]>=arr[mid-1]){
//             cout<<mid;
//             break;
//         }
//         else if(arr[mid]<=arr[mid-1]){                  //peak is right side of the mid
//             end=mid-1;
//         }
//         else{                                          //peak is left side of the mid 
//             st=mid+1;
//         }
//     }

// }

// int main(){
//     vector <int> arr={3,4,5,6,1,2};
//     int st = 0,end = arr.size()-1;
//     while(st<=end){
//         int mid = st+(end-st)/2;
//         if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1]) {
//             cout<< mid;
//             break;
//         }
//         else if(arr[mid]<=arr[mid-1]) end = mid-1;
//         else st=mid+1;
//     }
// }

				//single element in a sorted array
				//brute force 

// int main(){
// 	int ans =0;
// 	vector <int> arr={1,1,2,3,3,4,4,5,5};
// 	int n=arr.size();
// 	for(int mid=0;mid<n;mid++){
// 		if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]){
// 			ans = arr[mid];
// 		}
// 	}cout<<ans;
// }

// int main(){
// 	vector <int> arr={1,2,2,3,3,4,4,5,5};
// 	int n=arr.size();
// 	int st=0;
// 	int end=n-1;
// 	while(st<end){
// 		int mid=st+(end-st)/2;								            //find mid
// 		if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]){				// if mid is answer return the element
// 			cout<<arr[mid];
// 		}
// 		if(mid%2==0){									                // if mid is odd 	
// 			if(arr[mid]==arr[mid-1]){
// 				end=mid-1;
// 			}
// 			else{
// 				st=mid+1;
// 			}
// 		}
// 		else{										                    //if mid is even 
// 			if(arr[mid]==arr[mid-1]){
// 				st=mid+1;
// 			}
// 			else{
// 				end =mid -1;
// 			}
// 		}
// 	}
// }


// int main(){
//     vector <int> arr={1,1,2,2,3,4,4,5,5};
//     int n = arr.size() , ans = -1;
//     int st = 0, end = n-1;
//     while(st<end){
//         int mid = st + (end-st)/2;
//         if(arr[mid] != arr[mid+1] && arr[mid] != arr[mid-1]) {
//             ans = mid;
//             break;
//         }
//         else if(mid%2 == 0){
//             if(arr[mid] == arr[mid-1]) end = mid - 1;
//             else st = mid + 1;
//         }
//         else{
//             if(arr[mid] == arr[mid-1]) st = mid + 1;
//             else{
//                 end = mid - 1;
//             }
//         }
//     }
//     cout<< ans;
// }



