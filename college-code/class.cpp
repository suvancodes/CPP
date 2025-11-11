// #include<iostream>
// #include<stack>
// #include<string>
// using namespace std;
// // // 1. Write a program to sort a stack using another stack

// // // 3. Write a program to reverse a string using stack.
 
// int main(){
//     stack<int> s;
//     stack<int>s1;
//     s.push(10);
//     s.push(40);
//     s.push(30); 
//     s.push(20);
//     while(!s.empty()){
//         int t=s.top();
//         s.pop();
//         while(!s1.empty() && s1.top()>t){
//             s.push(s1.top());
//             s1.pop();
//         }
//         s1.push(t);
//     }
//     while(!s1.empty()){
//         s.push(s1.top());
//         s1.pop();
//     }
//     while(!s.empty()){
//         cout<< s.top()<<" ";
//         s.pop();
//     }
//     cout<<endl;
// return 0;
// }

// 2. Write a program for tower of hanoi 

// #include <iostream>
// using namespace std;

// void towerOfHanoi(int n, char s, char d, char a) {
//     if (n == 0) {
//         return;
//     }
//     towerOfHanoi(n - 1, s, a, d);
//     cout << "Move disk " << n << " from " << s << " to " << d << endl;
//     towerOfHanoi(n - 1, a, d, s);
// }

// int main() {
//     int n;
//     cout << "Enter number of disks: ";
//     cin >> n;
//     cout << "\nSequence of moves:\n";
//     towerOfHanoi(n, 'A', 'C', 'B');
//     return 0;
// }


// reverce string using stack

// int main(){
//     string str="hello";
//     stack<char> s;
//     for(int i=0;i<str.length();i++){
//         s.push(str[i]);
//     }
//     string rev="";
//     while(!s.empty()){
//         rev.push_back(s.top());
//         s.pop();
//     }
//     cout<<rev<<endl;
//     return 0;
// }