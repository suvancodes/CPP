#include<iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<string> s = {"a","a","a","b","b"};
    int idx = 0;
    for(int i = 0; i < s.size(); i++){
        int ct = 0;
        
        string cch=s[i];
        while(s[i] == cch && i<s.size()){
            ct++;
            i++;
        }
        if(ct==1){
            s[idx] = cch;
        }
        s[idx++]=cch;

        string str = to_string (ct);
        for(int dig : str){
            s[idx++] = dig;

        }
        
        i--;

    }
    s.resize(idx);
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
}