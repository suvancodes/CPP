#include<iostream>
#include <vector>
using namespace std;
 
int main(){
    int a=10;
    int* ptr=&a;
    int** ptr2=&ptr;
    cout<<ptr;
    cout<<*(ptr);//10
}
