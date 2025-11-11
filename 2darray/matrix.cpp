#include<iostream>
#include <vector>
#include <string>
using namespace std;
// int main(){
//     int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};          //creat 2d arr
//     int row=4;
//     int col=4;
//     matrix[2][1]=18;   //change element
//     // cout<<matrix[2][1];    //access element
//     for (int i=0;i<4;i++){
//         for(int j=0; j<3;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
// return 0;
// }

                    //linear search in 2d array


// #include<iostream>
// #include <vector>
// #include <string>
// using namespace std;
// int main(){
//     int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};          //creat 2d arr
//     int row=4;
//     int col=4;
//     int kye=10;
//     matrix[2][1]=18;   //change element
//     // cout<<matrix[2][1];    //access element
//     for (int i=0;i<4;i++){
//         for(int j=0; j<3;j++){
//             if(matrix[i][j]==kye){
//                 cout<<i<<" "<<j;
//             }
//         }
        
//     }
    
// return 0;
// }

                //max row sum

// #include<iostream>
// #include <vector>
// #include <string>
// using namespace std;
// int main(){
//     int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};          //creat 2d arr
//     int row=4;
//     int col=4;
//     int ms=INT_MIN;
//     for (int i=0;i<4;i++){
//         int cs=0;
//         for(int j=0; j<3;j++){
//             cs+=matrix[i][j];
//         }
//         ms=max(cs,ms);
//     }
//     cout<<ms;
// return 0;
// }

                    //max column sum


// int main(){
//     vector<vector<int>> mat={{1,2,3},{4,5,6},{7,8,9}};
//     int ms=INT_MIN;
//     for(int i=0;i<mat.size();i++){
//         int cs=0;
//         for(int j=0;j<mat[i].size();j++){
//             cs+=mat[j][i];
//             ms=max(ms,cs);
//         }
        
//     }
//     cout<<ms;
    
//     return 0;
// }

// #include<iostream>
// #include <vector>
// #include <string>
// using namespace std;
// int main(){
//     int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9}};          //creat 2d arr
//     int row=3;
//     int col=3;
//     int ds=0;
//     for (int i=0;i<4;i++){
//         for(int j=0; j<3;j++){
//             if(i==j){
//                 ds+=matrix[i][j];
//             }
//             else if(j==row-i-1 && i!=j){
//                 ds+=matrix[i][j];
//             }
//         }
//     }
//     cout<<ds;
// return 0;
// }


                    //2d vactor


// int main(){
//     vector <vector<int>> matx={{1,2,3},{4,5,6},{7,8,9}};
//     //row=matx.size()
//     for (int i=0;i<matx.size();i++){
//         for(int j=0;j<matx[i].size();j++){
//             cout<<matx[i][j];
//         }
//         cout<<endl;
//     }
// }
                //bianry search in 2d mtrix

// int main(){
//     vector <vector<int>> mat={{1,2,3},{4,5,6},{7,8,9}};
//     int tar=8;
//     for(int i=0;i<mat.size();i++){
//         for (int j=0;j<mat[i].size();j++){

//         }
//     }
// }