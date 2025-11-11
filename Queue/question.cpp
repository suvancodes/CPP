#include<iostream>
#include<vector>
#include<queue>
#include<deque>
using namespace std;

//  nive approuch
// Time Complexity o(n*k)


// int main(){
//     vector<int>arr = {2,3,4,1,5,7};
//     int k=3;
//     vector<int>ans;
//     // for(int i = 0;i<arr.size()-k+1;i++){
//     //     int mx = 0;
//     //     for(int j = i;j<i+k;j++){
//     //         if(arr[j]>mx) mx = arr[j];
//     //     }
//     //     ans.push_back(mx);
//     // }


//     for(int i = 0;i<ans.size();i++){
//         cout<<ans[i]<<endl;
//     }

// return 0;
// }


int main(){
    vector<int>arr = {2,3,4,1,5,7,91,9};
    int k=2;
    vector<int>ans;
    deque<int>dq;

    // stap 1 -> get maximum element for first window
    for(int i =0;i<k;i++){
        while(dq.size()>0 && arr[i]>arr[dq.front()]){
            dq.pop_back();
        }
        dq.push_back(i);
        
    }
    for(int i = k;i<arr.size()+1;i++){
        ans.push_back(arr[dq.front()]);

        // remove all element which is never be a ans 

        while(dq.size()>0 && arr[i]>arr[dq.front()]){
            dq.pop_back();
        }

        // remove element which is not a part of current window

        while(dq.size()>0 && dq.front()<i-k+1){
            dq.pop_front();
        }
        dq.push_back(i);
        
    }


    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}