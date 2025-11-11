                                // minimum of two number using function 
// #include <iostream>
// using namespace std;
// int min(int a,int b){
//     if (a<b){
//         return a;
//     }else{
//         return b;
//     }
// }
// int main(){
//     cout << min(8,7);
// }

                                            // factorial using funcyion
#include <iostream>
using namespace std;
int sum(int n){
    int sum=1;
    for (int i=1;i<=n;i++){
        sum*=i;
    }return sum;
}
int main(){
        cout << sum(10);
        return 0;
    }



