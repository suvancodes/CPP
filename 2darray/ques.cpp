#include<iostream>
#include<vector>
#include<string>
using namespace std;

            //tarnspose of a matrix
int main(){
    vector<vector<int>> mat={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> mat1={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            mat[i][j]=mat1[j][i];
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}

                    //max number of a matrix
// int main(){
//     vector<vector<int>> mat={{1,2,3},{4,5,6},{7,8,9}};
//     int mx=0;
//     for(int i=0;i<mat.size();i++){
//         for(int j=0;j<mat[i].size();j++){
//             mx=max(mx,mat[i][j]);
//         }
//     }
//     cout<<mx;
// return 0;
// }

// bool tf(vector<vector<int>> mat){
//     for(int i=0;i<mat.size();i++){
//         for (int j=0;j<mat[i].size();j++){
//             if(i!=j){
//                 if(mat[i][j]!=mat[j][i])
//                 return false;
//             }
//         }
//     }
//     return true;

// }
// int main(){
//     vector<vector<int>> mat={{1,2,3},{2,4,5},{3,5,6}};
//     if(tf(mat))
//     cout<<"symm";
//     else
//     cout<<"un";
// }