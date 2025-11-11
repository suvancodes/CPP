#include<iostream>
#include <cctype>
#include <vector>
#include <string>
using namespace std;
            //char array
 
// int main(){
//     char str[]={'a','b','c','\0'};
//     char ans[]="abc";                   //string literals << 
//     for (int i=0;i<strlen(str);i++){
//         cout<<str[i]<<ans[i];
//     }
// return 0;
// }

            // input and output

// int main(){
//     char str[1];
//     cout<<"enter word";
//     cin.getline(str,123,'$');               //cin.getline(string,lenght,delimeter);
//     cout<<str;
// }


                //STRIMG IN CPP
                //STRING ARE NOT A DATA TYPE IN CPP IT IS A CLASS 

                //first string

// int main(){
//     string str1 ="subho";           //dynamic <<it resize in runtime 
//     string str2 ="payra";
//     string str;
//     string str3=str1+str2;          //combine two string 
//     cout <<str3<<endl;
//     cout<<(str1==str2)<<endl;             // compair two string

//     cout<<(str1<str2)<<endl;             // compair two string

//     cout<<(str1>str2)<<endl;             // compair two string

//     cout<<str1.length()<<endl;           //length of string
//     getline(cin,str);                    // input string >>> getline(cin,string_name,delimeter);
//     cout<<str<<endl;
//     return 0;
// }


                        // REVERCE A STRING 

// int main (){
//     string str="ohbus";
//     int st=0;
//     int end=str.length()-1;
//     while(st<end){
//         swap(str[st],str[end]);
//         st++;
//         end--;
//     }
//     cout<<str;
// }

                    // USING STL FUNCTIONS

// int main(){
//     string str="ohbus";
//     reverse(str.begin(),str.end());              //reverse(string_end.begin(),string_name.end());
//     cout<<str;
// }

//                 // palidrome or not

// bool isalpha(char ch){
    
//     return (ch<=0 && ch>=0) && (ch<='z' &ch>='a');
// }
// bool tf(string s){
    
//     int n=s.length();
//     int st=0,end=n-1;
//     while(st<end){
//         if(!isalpha(s[st])){
//             st++;
//             continue;
//         }
        
//         else if(!isalpha(s[end])){
//             end--;
//             continue;
//         }
//         if(s[st]!=s[end]){
            
//             st++;
//             end--;
//             return false;
//         }
//     }
//     return true;
// return 0;
// }

// int main(){
//     string s="ra*cecar";
//     if(tf(s)){
//         cout<<"palidrom";
//     }
//     else{
//         cout<<"not";
//     }
// }

                    //reverse word in a string
                    
                    //stap 1->reverse the whole words
                    //stap2-> reverse all indivisule word

// int main(){
//     string s="subho payra";
//     reverse(s.begin(),s.end());                 // reverse the whole
//     string ans;
//     for (int i=0;i<s.length();i++){
//         string word;
//         while(i<s.length() && s[i]!=' '){
//             word+=s[i];                        // take all indivisule  words
//             i++;
//         }
//         reverse(word.begin(),word.end());        // reverse this
//         if(word.length()>0){
//             ans+=" "+word;
//         }
//     }
//     cout<< ans.substr(1);                       //ans.substr(starting_index) that used to start the string form 'starting_index'.
// }

                            //string compression

// int main(){
//     vector<string> ch={"a","a","b","b","b","c","c","c"};
//     int idx=0;
//     for (int i=0;i<ch.size();i++){
//         int ct=0;
//         string cch=ch[i];
//         while(i<ch.size() && ch[i]==cch){
//             ct++;
//             i++;
//         }
//         if(ct==1){
//             ch[idx++]=cch;
//         }
//         else{
//             ch[idx++]=cch;
//             string str= to_string(ct);                  // convart int to string
//             for(int disit:str){
//                 ch[idx++]=disit;
//             }
//         }
//         i--;
//     }
//     ch.resize(idx);
//     for(int i=0;i<ch.size();i++){
//         cout<<ch[i]<<" ";
//     }
//     return 0;
// }