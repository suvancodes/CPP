#include <iostream>
#include <string>
#include <vector>
using namespace std;

            // factorial of n number 
// int rec(int n){
//     if(n==0) return 1;
//     return n*rec(n-1);
// }
// int main(){
//     int n;
//     cin>> n;
//     cout<< rec(n);

// }

            // sum of n number 

// int sum(int n){
//     if(n==0) return 0;
//     return n+sum(n-1);
// }
// int main(){
//     int n;
//     cin>> n;
//     cout<< sum(n);

// }

// void rev(int n ,vector<int> arr,vector<int> rarr){
//     if(n==0) return;
//     rarr.push_back(arr[n]);
//     rev(n-1,arr,rarr);
// }

// int main(){
//     vector <int> arr={1,2,3,4,5};
//     vector <int>rarr;
//     int n=arr.size();
//     rev(n,arr,rarr);
//     for(int i=0;i<n;i++){
//         cout << rarr[i]<<endl;
//     }
// }
                    // SUM OF DISIT OF A NUMBER

// void sum(int n, int &s){
//     if(n==0) return;
//     int di=n%10;
//     s+=di;
//     sum(n/10,s);
// }

// int main(){
//     int n=123;
//     int s=0;
//     sum(n,s);
//     cout<<s;
// }

                    // ALL PERMUTATION IN A STRING

// void re(string &s,int n ,int idx){
//     if(idx==n){
//         cout<<s<<endl;
//         return;
//     }
//     for(int i=idx;i<n; i++){
//         swap(s[idx],s[i]);
//         re(s,n,idx+1);
//         swap(s[idx],s[i]);
//     }
// }
// int main(){
//     string s="abc";
//     int n=s.size();
//     int idx=0;
//     re(s,n,idx);
// }

                        //N QUEEN PROBLEM 

// bool issafe(vector<vector<int>> &board,int row ,int col, int n){
//     for(int j=0;j<n;j++){
//         if(board[row][j]=='q') return false;
//     }
//     for(int i=0;i<n ;i++){
//         if(board[i][col]=='q') return false;
//     }
//     for(int i=row, j=col; i>0 && j>0; i--,j--){
//         if(board[i][j]=='q') return false;
//     }
//     for(int i=row, j=col; i>0 && j<n; i--,j++){
//         if(board[i][j]=='q') return false;
//     }
//     return true;
// }

// void re(vector<vector<int>> &board, int row, int n,vector<vector<char>> &ans){
//     if(row==n){ 
//         ans.push_back({board});
//         return;
//     }
//     for(int i=0; i<n; i++){
//         if(issafe(board,row,i,n)){
//             board[row][i]='q';
//             re(board,row+1,n,ans);
//             board[row][i]='.';
//         }
//     }
// }
// int main(){
//     int n=3;
//     vector<vector<char>> board(n, vector<char>(n, '.'));
//     vector<vector<char>> ans;
//     int row= 0;
//     re(&board,row,n,&ans);
//     for (auto solution : ans) {
//         for (auto row : solution) {
//             for (auto cell : row) {
//                 cout << cell << " ";
//             }
//             cout << endl;
//         }
//         cout << "-----" << endl;
//     }
// }

// bool issafe(vector<vector<char>> &board,int row,int col,int n) {
//     // chack row
//     for (int j = 0; j < n; j++) {
//         if (board[row][j] == 'q') return false;
//     }
//     // Check col
//     for (int i = 0; i<n; i++) {
//         if (board[i][col]=='q') return false;
//     }
//     // Top-left dia
//     for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
//         if (board[i][j] == 'q') return false;
//     }
//     // Top-right dia
//     for (int i=row,j=col;i>=0&&j<n;i--,j++) {
//         if (board[i][j]=='q') return false;
//     }
//     return true;
// }
// void re(vector<vector<char>> &board, int row, int n, vector<vector<vector<char>>> &ans) {
//     if (row == n) {
//         ans.push_back(board);
//         return;
//     }
//     for (int i=0; i <n;i++) {
//         if (issafe(board,row,i,n)) {
//             board[row][i]='q';
//             re(board,row+1,n,ans);
//             board[row][i]='.';
//         }
//     }
// }

// int main() {
//     int n;
//     cout<< "number of queen->";
//     cin>>n;
//     vector<vector<char>> board(n, vector<char>(n, '.'));
//     vector<vector<vector<char>>> ans;
//     re(board, 0, n, ans);
//     for (auto s : ans) {
//         for (auto row : s) {
//             for (auto as : row) {
//                 cout << as << " ";
//             }
//             cout << endl;
//         }
//         cout << "---------" << endl;
//     }

//     return 0;
// }
