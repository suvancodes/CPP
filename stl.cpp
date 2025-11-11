#include<iostream>
#include <vector>
#include <list>
#include<string>
#include<deque>
#include<stack>
#include<queue>
#include <set>
#include<map>
using namespace std;
            //erase  time comp ->O(n)
// int main(){
//     vector <int> arr={1,2,3,4,5,6};
//     vector <int> ans={1,2,3,4,5,6};
//     arr.erase(arr.begin());             //erase a value at index 0
//     arr.erase(arr.begin()+1);             //erase a value at index 1
//     arr.erase(arr.begin()+2);             //erase a value at index 2
//     arr.erase(arr.begin()+2);             //erase a value at index 2
//     ans.erase(ans.begin()+1,ans.begin()+4);             //erase a range of value form index 1 to index 3

    // for (int i=0 ;i<arr.size();i++){
    //     cout<<arr[i];
    // }
//     for (int i=0 ;i<ans.size();i++){
//         cout<<ans[i];
//     }
// return 0;
// }

            //INSERT   time comp-> O(N)

// int main(){
//     vector <int> arr={1,2,3,4,5,6};
//     arr.insert(arr.begin()+2,100);              //insert 100 in index No. 2
//     for (int i=0 ;i<arr.size();i++){
//         cout<<arr[i]<<endl;
//     }
// }


                    //clear and empty 
// int main(){
//     vector <int> arr={1,2,3,4,5,6};
//     arr.clear();                //delet all element form a array
//     for (int i=0 ;i<arr.size();i++){
//         cout<<arr[i]<<endl;
//     }
//     cout << "in arr empty:"<<arr.empty();               //say array empty or not 
// }

                            // ITERATORS



// int main(){
//     vector <int> vec={1,2,3,4,4};
//     vector<int>:: iterator itr;
//     for(itr=vec.begin();itr!=vec.end();itr++){                  //vec.begin() & vec.end() -> page-march 14
//         cout<< *(itr);
//     }
// }


// int main(){
//     vector <int> vec={1,2,3,4,4};
//     // vector<int>:: reverse_iterator itr;
//     for(auto itr=vec.rbegin();itr!=vec.rend();itr++){                  //vec.rbegin() & vec.rend() -> page-march 15
//         cout<< *(itr);
//     }
// }

                            // LIST IN CPP
                            
                            //we can use .size(),.clear().erase(),.begin(),.end(), .insert(), .fornt() .back()

// int main(){
//     vector <int> vec={1,2,3};
//     list <int> l={1,2,3,4};
//     l.push_back(0);             //push elemend form back
//     l.push_front(9);            //push element form front
//     l.pop_front();            //delet element form front
//     l.pop_back();            //delet element form back
//     for(auto itr=l.begin();itr!=l.end();itr++){                  // HERE WE CAN'T PRINT ELEMENT USING SIMPLE FPR LOOP WE SOULD USE FRO EACH LOOP OR IREATORS
//         cout<<*itr;
//     }
// }


                            // DEQUE: DOUBLE ENDED QUEUE
                            //we can use .size(),.clear(), .erase(),.begin(),.end(), .insert(), .fornt() .back()

// int main(){
//     vector <int> vec={1,2,3};
//     deque <int> l={1,2,3,4};
//     l.push_back(0);             //push elemend form back
//     l.push_front(9);            //push element form front
//     l.pop_front();            //delet element form front
//     l.pop_back();            //delet element form back
//     for(int i=0;i<l.size();i++){            //HERE WE CAN PRINT ALL ELEMENT LIKE ARRAY USING SIMPLE FOR LOOP
//         cout<<l[i];
//     }   
// }
                            
                        // pairs in cpp -> it contain only two elements

// int main(){
//     pair<int,char>p={1,'e'};        //creat a pair
//     pair<int,pair<int,char>> p2={2,{p}};        // creat a pair of pair
//     cout<<p.first<<endl;            //print first element
//     cout<<p.second<<endl;           //print second element
//     cout<<p2.first<<endl;
//     cout<<p2.second.first<<endl;
//     cout<<p2.second.second<<endl;
// }
                //read pair one more time


                // stack in cpp
                // diagram on page march -15
                // it is like a container where add element on top  and remove element on top
// int main(){
//     stack <int> x;
//     x.push(1);          // add element 
//     x.push(2);          // add element 
//     x.emplace(23);      // add element 
//     x.emplace(26);      // add element 
//     int t=x.top();      // return top value of a stack
//     s.pop();            //delet the top element 
//     s.empty();          //chack stack empty or not
//     s.size();           // find size of a stack
//     stack<int> s2;
//     s2.swap();          //value of s came in s2 and s became empty

//     cout<<t;
// }

                //queue in cpp
                //FIRST IN FIRST OUT OR ORDER OF PUSH IS EQUAL TO ORDER OF POP

// int main(){
    // queue <int> x;
    // x.push(1);          // add element 
    // x.push(2);          // add element 
    // x.emplace(23);      // add element 
    // x.emplace(26);      // add element 
    // int t=x.front();      // return first value of a queue
    // s.pop();            //delet the top element 
    // s.empty();          //chack stack empty or not
    // s.size();           // find size of a stack
    // queue<int> s2;
    // s2.swap();          //value of s came in s2 and s became empty
    // queue <int> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // while(!q.empty()){
    //     cout<<q.front();
    //     q.pop();
    // }

    // cout<<t;
// }

                // priorty queue
                // it is a sorted queue whose top element was largest element of an queue and bottam elememt was smallest element on a queue

// int main(){
//     // priority_queue<int>q;                                     //sort large to small in order
//     priority_queue<int,vector<int>,greater<int>>q;              //sort small to large in order
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     while(!q.empty()){
//         cout<<q.top();          // return top elemene on a queue
//         q.pop();
//     }
//}

                        //SET IN CPP
                        // A set stores unique elements where they:
                        
                            // 1. Are sorted automatically in ascending order.
                            // 2. Are unique, meaning equal or duplicate values are ignored.
                            // 3. Can be added or removed, but the value of an existing element cannot be changed.
                            // 4. Cannot be accessed by index numbers, because the order is based on sorting and not indexing.
                            // 5. To use a set, you have to include the <set> header file:

// int main(){
//     // set<int> s={3,5,22,1,6,3};
//     set<int, greater<int>> s = {1, 7, 3, 2, 5, 9};                  // sort a set by decrecing order
//     s.insert(20);           //add element in the set
//     s.erase(20);            // remove element form the set
//     s.size();                // return size of the set
//     s.clear();               //clear total set
//     s.empty()               //say set empty or not
//     for(int num:s){
//         cout<<num<<"\n";
//     }
// }
                // map in cpp
// int main(){
//     map<int,int>m;
//     m[2]=2;
//     m[3]=3;
//     m[4]=4;
//     m.insert({5,6});            //add element in map
    
//     for(auto p:m){
//         cout<<p.first<<" "<<p.second<<endl;
//     }

// }