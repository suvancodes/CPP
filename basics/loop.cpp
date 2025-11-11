// vote meater
// #include <iostream>
// using namespace std;
// int main(){
//     int age;
//     cout <<"enter age ";
//     cin >> age;
//     if (age>=18 ){
//         cout<<" you can vote ";
//     }else{
//         cout << "you can not vate";
//     }
//     return 0;
// }


// calculator
// #include <iostream>
// using namespace std;
// int main(){
//     int a,b;
//     string mathode;
//     cout<<"enter a ->";
//     cin>>a;
//     cout<<"enter mathode->";
//     cin >> mathode;
//     cout<<"enter b->";
//     cin >> b;
//     if (mathode =="+"){
//         cout<<a+b;
//     }else if (mathode =="-"){
//         cout<<a-b;
//     }else if (mathode =="*"){
//         cout<<a*b;
//     }else {
//         cout<<a/b;
//     }
//     return 0;
// }

// even / odd
// #include <iostream>
// using namespace std;
// int main(){
//     int num;
//     cout << "enter your number ->";
//     cin>> num;
//     if (num%2!=0){
//         cout<< "number is odd";
//     } else {
//         cout << "number is even";
//     }
//     return 0;
// }


// mark va gread

// #include <iostream>
// using namespace std;
// int main (){
//     int mark;
//     cout << "enter mark->\n";
//     cin >> mark;
//     if (mark>75){
//         cout << "gread is A \n";
//     }else if (mark>60){
//         cout << "gread is B\n";
//     }
//     else {
//         cout <<"gread C";
//     }
//     return 0;
// }

// uppercase or lowercase
// value of ch a=97 b=98 c=99 like this (a-z)=(97-122)
//             A=65 B=66 C=67 and (A-Z)=(65-90)
// #include <iostream>
// using namespace std;
// int main (){
//     char ch;
//     cout<<"enter ch->";
//     cin>> ch;
//     if (ch>=65 && ch<=90){
//         cout<< "ch is uppercase ";
//     }else {
//         cout <<"ch is lowercase";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
    
//     return 0;
// }


// type of loop 1.while loop 2.for loop 3.do while loop
// print num 1-5
// #include <iostream>
// using namespace std;
// int main(){
//     int c,a;
//     c=1;
//     cout << "enter value of a";
//     cin>> a;
//     while(c<=a){
//         cout << c<< " ";
//         c++;
//     }
// }


                                        // find factorial of a number
// #include <iostream>
// using namespace std;
// int main (){
//     int n=5;
//     int fact=1;
//     for (int i=1;i<=5;i++){
//         fact*=i;
//     }
//     cout<<fact;
//     return 0;
// }


// for loop ->for(initialsation: condition : updation)
// print a number 1 to n by for loop
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cout << "enter the value of a";
//     cin>> a;
//     for(int i=1;i<=a ; i++){
//         cout<< i<< " ";
//     }
//     return 0;
// }

                                                        // sum of n number 
// #include <iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     int n;
//     cout << "enter n-";
//     cin>>n;
//     for(int i=1; i<=n ; i++){
//         // cout << i<< \n;
//         sum+=i;
//     }
//     cout<<sum;

//     return 0;
// }


                                            // sum odd number
// #include <iostream>
// using namespace std;
// int main(){
//     int n=15;
//     int oddsum=0;
//     for(int i=1; i<=n;i++){
//         if(i%2!=0){
//             oddsum+=i;
//         }
//     }
//     cout << oddsum;
//     return 0;
// }



                                            // a number prime or not  wrong
// #include <iostream>
// using namespace std;
// int main(){
//     int n=8;
//     for (int i=2;i<=n-1;i++){

//     }
//     return 0;
// }

// pattan problems
// outer loop say the number of row and inner loop print the element of this row
// 12345.....n
// .
// .
// .n                    qustion
// .
// 12345....n
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter n-";
//     cin>> n;
//     for (int i =1 ;i<=n; i++){
//         for (int j=1;j<=n;j++){
//             cout << j <<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// for print * number =number of row
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter n-";
//     cin>> n;
//     for (int i =1 ;i<=n; i++){
//         for (int j=1;j<=n;j++){
//             cout << "*" <<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// for char 
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter n-";
//     cin>> n;
//     for (int i =1 ;i<=n; i++){
//         char a='a';
//         for (int j=1;j<=n;j++){
//             cout << a;
//             a=a+1;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter n-";
//     cin>> n;
//     int a=1;
//     for (int i =1 ;i<=n; i++){
//         for (int j=1;j<=n;j++){
//             cout << a;
//             a=a+1;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// triangle pattan
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter n-";
//     cin>> n;
//     for (int i=0;i<n;i++){
//         for (int j=0;j<i+1;j++){
//             cout<< "*";
//         }
//         cout<< endl;
//     }
//     return 0;
// }


//Q-    1
    //  1 2
    //  1 2 3
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter n-";
//     cin>> n;
//     for (int i=0;i<n;i++){
//         int num=1;
//         for (int j=0;j<i+1;j++){
//             cout<< j<<" ";
//             num+=1;
//         }
//         cout<< endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter n-";
//     cin>> n;
//     for (int i=0;i<n;i++){
//         int num=1;
//         for (int j=i+1;j>0;j--){
//             cout<< j<<" ";
//             num+=1;
//         }
//         cout<< endl;
//     }
//     return 0;
// }


                                   // invarted trangle
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter n-";
//     cin>> n;
//     for (int i=0; i<n ;i++){
//         for(int j=0;j<i;j++){
//             cout << " ";
//             }for(int k=0;k<n-i;k++){
//                 cout<<i+1;
//             }
//         cout<< endl;
//     }
//     return 0;
// }



                                    // pyradmid pattam
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter n-";
//     cin>> n;
//     for (int i=0;i<n;i++){
//         for(int j=0;j<=n-i-1;j++){
//             cout<<" ";
//         }for(int j=0;j<=i;j++){
//             cout <<j+1;
//         }for(int j=0;j<i;j++){
//             cout<<j+1;
//         }
//         cout<< endl;
//     }
//     return 0;
// }



                                        // sum of disit in a number

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout <<"enter n-";
//     cin>>n;
//     int disitsum=0;
//     while (n>0){
//         int lastdisit=n%10;
//         n=n/10;
//         disitsum+=lastdisit;
//     }
//     cout<<disitsum;
// }


                                        //PRINT LARGEST NUMBER IN A ARRAY

// #include <iostream>
// using namespace std;
// void main(){
//     int mark[4]={1,2,3,4};
//     int small=INT_MAX;
//     for(int i=0;i<4;i++){
//         if(small>mark[i]){
//             small=mark[i];
//         }
//     }cout<<small;
//     return ;
// }


                                    //PRINT PIRAMID PATTERN
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter number";
//     cin>>n;
//     for (int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }for(int j=0;j<i;j++){
//             cout<<"*";
//         }for(int j=1;j<i;j++){
//             cout <<"*";
//         }cout<<endl;
//     }
// }

                                    //bainary to dacimal
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     int ans,pow;
//     ans=0;
//     pow=1;
//     cin>>a;
//     while (a>0){
//         int disit=a%10;
//         a/=10;
//         ans+=disit*pow;
//         pow*=2;
//     }cout<<ans;
// }
#include<iostream>
using namespace std;
int main(){
    cout<<;
}

                    //binary expontial
                    // find power

// int main(){
//     int n=3;
//     int pw;
//     cin>>pw;
//     int ans=1;
//     while(pw>0){
//         int disit=pw%2;
//         if(disit==1){
//             ans*=n;
//         }n*=n;
//         pw/=2;
//     }cout<<ans;
// }
