#include<iostream>
#include <vector>
#include <string>
using namespace std;
// int main(){
//     vector <vector<int>> mat={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
//     int tar=3;
//     int sr=0,er=mat.size();
//     while(sr<=er){
//         int mr=sr+(er-sr)/2;
//         int st=0;
//         int end=mat[mr].size()-1;
//         if(mat[mr][st]<tar && mat[mr][end]>tar){
        
//             while(st<=end){
//                 int mid=st+(end-st)/2;
//                 if(mat[mr][mid]==tar){
//                     cout<<mr<<mid;
//                     break;
//                 }
//                 else if(mat[mr][mid]<tar){
//                     end=mid-1;
//                 }
//                 else{
//                     st=mid+1;
//                 }
              
//             }
//             break;
//         }
//         else if(mat[mr][end]>tar){
//             er=mr-1;
//         }
//         else if(mat[mr][st]<tar){
//             sr=mr+1;
//         }
//     }
//     return 0;
// }

int main(){
    vector <vector<int>> mat={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    
}