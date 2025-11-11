#include<iostream>
#include<vector>
#include<string>
using namespace std;

                // A NUMBER PRIME OR NOT
// string isprime(int n){
//     for(int i=2;i*i<n ;i++){
//         if(n%i==0){
//             return "non prime";
//         }
//     }return "prime";

// }
 
// int main(){
//     int n=13;
//     cout<<isprime(n);
//     return 0;
// }

                    // COUNT PRIME NUMBER IN AN GIVEN RANGE
                    //SIEVE OF ERATOSTHENES

// int main(){
//     int n=10;
//     vector <bool> prime(n+1,true);
//     int count=0;
//     for(int i=2;i<n ;i++){
//         if(prime[i]){
//             count++;
//         }
//         for (int j=i*2;j<n;j=j+i){
//             prime[j]=false;
//         }
//     }
//     cout<<count;
// }
                    //amstrong number

// int main(){
//     int n=153;
//     int copyn=n;
//     int ans=0;
//     while(n>0){
//         int disit=n%10;
//         n/=10;
//         ans+=disit*disit*disit;
//     }
//     if (copyn==ans){
//         cout<< "amstrong";
//     }
//     else{
//         cout<< "not amstrong";
//     }
// }

                    //GCD-GREATEST COMMON DIVISOR

// int main(){
//     int a=28,b=20;
//     int c=max(a,b);
//     int gcd=1;
//     for(int i=1;i<c ;i++){
//         if(a%i==0 && b%i==0){
//             gcd=i;
//         }
//     }
//     cout<< gcd;
// }

                    //LCM

// int main(){
//     int a=28,b=20;
//     int c=max(a,b);
//     int gcd=1;
//     for(int i=1;i<c ;i++){
//         if(a%i==0 && b%i==0){
//             gcd=i;
//         }
//     }
//     int lcm=(a*b)/gcd;
//     cout<<lcm;
// }

                //REVERSE A NUMBER
                
// int main(){
//     int num=123,rnum=0;
//     while (num>0){
//         int disit =num%10;
//         num/=10;
//         rnum=rnum*10+disit;
//     }cout<<rnum;
// }

            //REVERSE A NUMBER using string
// int main(){
//     int num=234;
//     string str= to_string(num);
//     reverse(str.begin(),str.end());
//     cout<<str;
// }