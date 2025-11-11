#include <iostream>
#include <cmath>
using namespace std;
                        // amstrong number or 
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout <<"enter your number ";
//     cin>>n;
//     int o=n;
//     int ans=0;
//     while(n>0){
//         int disit=n%10;
//         n/=10;
//         ans+=disit*disit*disit;
//     }if(ans==o){
//         cout<<"number is armstrong";
//     }
//     return 0;
// }


                        //number of leg and hand fo chacken and dog

// #include <iostream>
// using namespace std;
// int main(){
//     int c , d;
//     cout<<"enter number of chicken";
//     cin>>c;
//     cout<<"enter number of dog ";
//     cin>>d;
//     cout<<"total hand="<<c*0+d*2<<endl;
//     cout<<"total leg="<<c*2+d*2<<endl;

// }


                    //25 multiply two number without using *

// #include <iostream>
// using namespace std;
// int main(){
//     int n1,n2;
//     cout <<"enter n1=";
//     cin>>n1;
//     cout <<"enter n2=";
//     cin>>n2;
//     int ans=0;
//     for(int i=0;i<n2;i++){
//         ans+=n1;
//     }cout<<ans;
//     return 0;
// }


                            //27 print odd number 

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your number ";
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         if (i%2!=0){
//             cout<<i<<" ";
//         }
//     } 
//     return 0;
// }

                            //binary to dacimal
// #include <iostream>
// using namespace std;

// int main(){
//     int a;
//     cout<<"enter number";
//     cin>>a;
//     int ans=0;
//     int power=1;
//     while (a>0){
//         int disit=a%2;
//         a/=2;
//         ans+=disit*power;
//         power*=10;
//     }cout<<ans;
    // return 0
// }

                        // calculate sum of a given array
// int main (){
//     int arr[]={1,3,45,6,7};
//     int sum=0;
//     for(int i=0;i<sizeof(arr)/sizeof(int);i++){
//         sum+=arr[i];
//     }cout<<sum;
// }

                        //multiplication of a given array


//  int main (){
//     int arr[]={1,1,1,1};
//     int multi=1;
//     for(int i=0;i<sizeof(arr)/sizeof(int);i++){
//         multi*=arr[i];
//     }cout<<multi;
// }



// int main (){
//     int arr[5];

//     for (int i = 0; i < 5; i++)
//         cin>>arr[i];
    
//     int mn=INT_MAX;
//     int mx = INT_MIN;
//     for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        
//             mn= min( mn, arr[i]);
//             mx= max( mx, arr[i]);
//     }
//     int minind=-1,maxind=-1;
//     for(int i=0;i<sizeof(arr)/sizeof(int);i++){
//         if(arr[i]==mn){
//         minind=i;
//         break;
//         }
//     }
//     for(int i=0;i<sizeof(arr)/sizeof(int);i++){
//         if(arr[i]==mx){
//         maxind=i;
//         break;
//         }
//     }

//     arr[minind]=mx;
//     arr[maxind]=mn;
//     for(int i=0;i<sizeof(arr)/sizeof(int);i++)
//     cout << arr[i] << " ";
// }

    
// int main (){
//     int bi;
//     cout<<"enter-";
//     cin>>bi;
//     int de=0;
//     while (bi>0){
//         int m=bi%10;     // m=1     m=0     m=1
//         de+=;    // de= 2       de=3        de=5
//         bi/=10;            // bi= 10      bi=1      bi=0
//     }
//     cout<<de;

// }