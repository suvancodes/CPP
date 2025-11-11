#include<iostream>
#include<vector>
using namespace std;
//                         ptint  1 to n number
// void m(int n){
//     if(n==1){
//         cout<<1;
//         return;
//     }
//     cout<<n<<" ";
//     m(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     m(n);
//     cout<<endl;
// }
//                             // n factriol
// int fac(int n){
//     int fact=1;
//     if(n==0){
//         return 1;
//     }
//     fact=n*fac(n-1);
//     return fact;
// }
// int main(){
//     int n =1;
//     int ans=fac(n);
//     cout<<ans;
// }

//                     sumof n number


// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     return n+sum(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<sum(n);
// }

//                 fibonacci number

// int fib(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fib(n-1)+fib(n-2);
// }
// int main(){
//     int n=3;
//     cout<<fib(n);
// }

                // REVERSE A STRING 
// void re(string &n , int st ,int end){
//     if(st>=end) return;
//     swap(n[st],n[end]);
//     re(n , st+1 , end-1);
// }
// int main(){
//     string n="subho";
//     int st=0, end= n.length()-1;
//     re(n,st, end);
//     cout<<n;
// }
                // POWER OF A NUMBER 
                
// int re(int a, int b){
//     if(b == 0) return 1;
//     return a*re(a,b-1);
    
// }
// int main(){
//     int a=10;
//     int b=3;
//     cout<< re(a,b);
// }


//             chack arr sorted or not

// bool sot(vector<int> vec,int n){
//     if(n==0 || n==1) return true;
//     return vec[n-1]>=vec[n-2] && sot(vec,n-1);;
    
// }

// int main(){
//     vector  <int> arr={1,2,3,4,5};
//     int k=arr.size();
//     if(sot(arr,k)) cout<<"true";
//     else cout << "false";
// }

//             binary search in array
//             TC= O(logn)   SC=O(logn)

// int bi(vector <int> vec, int ter, int st, int end){
//     int mid= st+(end-st)/2;
//     if(st<=end){
//         if(vec[mid]== ter){
//             return mid;
//         }
//         else if(vec[mid]<ter){
//             return bi(vec,ter,st+1,end);
//         }
//         else{
//             return bi(vec,ter,st,end-1);
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int> vec={1,2,4,5,6};
//     int tar=5;
//     int st=0;
//     int end =vec.size()-1;
//     cout<< bi(vec,tar,st,end);
// }


                // PRINT SUBARRAY

                // TC=O(2^n)
// void psub(vector<int> arr, vector<int> ans, int i){
//     if(i==arr.size()){
//         for(int j=0; j<ans.size();j++){
//             cout<<ans[j]<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     ans.push_back(arr[i]);
//     psub(arr,ans,i+1);
//     ans.pop_back();
//     psub(arr,ans,i+1);
// }

// int main(){
//     vector <int> arr={1,2,3};
//     vector <int> ans;
//     int i=0;
//     psub(arr,ans,i);
// }

                    // permutation in a array

// void re(vector<int> &arr, int idx , vector<vector<int>> &ans){
//     if(idx==arr.size()){
//         ans.push_back({arr});
//         return;
//     }
//     for(int i=idx; i<arr.size();i++){
//         swap(arr[idx],arr[i]);
//         re(arr,idx+1,ans);
//         swap(arr[idx],arr[i]);
//     }
// }

//  int main(){
//     vector<int> arr={1,2,3};
//     int idx=0;
//     vector<vector<int>>ans;
//     re(arr,idx,ans);
//     for(int i=0;i<ans.size(); i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j];
//         }
//         cout<<endl;
//     }
// }
                // N QUEEN PROBLEM  (IMPORTENT): place n queen in a n*n chass board such a way they can't attack each other


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


                    //sudoku solver

// bool iss(vector<vector<int>> &su,int row, int col, int dg){
//     for(int i = 0; i < 9; i++){
//         if(su[row][i] == dg || su[i][col] == dg) return false;
//     }
//     int sr = (row / 3) * 3;
//     int sc = (col / 3) * 3;
//     for(int i=sr; i < sr+3; i++){
//         for(int j = sc; j < sc + 3; j++){
//             if(su[i][j]== dg) return false;
//         }
//     }
//     return true;
// }

// bool re(vector<vector<int>> &su,int row, int col){
//     if(row == 9){
//         return true;
//     }
//     int nrow = row;
//     int ncol = col+1;
//     if(ncol == 9){
//         nrow = row + 1;
//         ncol = 0;
//     }
//     if(su[row][col]!= 0){
//         return re(su,nrow,ncol);
//     }
//     for(int dg = 1; dg <= 9; dg++){
//         if(iss(su,row,col, dg)){
//             su[row][col] = dg;
//             if(re(su, nrow, ncol)) return true;
//             su[row][col] = 0;
//         }
//     }
//     return false;
// }

// int main() {
//     vector<vector<int>> su = {
//         {5, 0, 0, 0, 7, 0, 0, 0, 0},
//         {0, 0, 0, 1, 9, 5, 0, 0, 0},
//         {0, 9, 8, 0, 0, 0, 0, 6, 0},
//         {8, 0, 0, 0, 6, 0, 0, 0, 3},
//         {4, 0, 0, 8, 0, 3, 0, 0, 1},
//         {7, 0, 0, 0, 2, 0, 0, 0, 6},
//         {0, 6, 0, 0, 0, 0, 2, 8, 0},
//         {0, 0, 0, 4, 1, 9, 0, 0, 5},
//         {0, 0, 0, 0, 8, 0, 0, 7, 9}
//     };
//     int row = 0;
//     int col = 0;
//     if(re(su,row,col)) {
//         for(const auto &row : su) {
//             for(int val : row) {
//                 cout << val << " ";
//             }
//             cout << endl;
//         }
//     } else {
//         cout << "No solution exists!" << endl;
//     }

//     return 0;
// }